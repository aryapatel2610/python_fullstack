CREATE DATABASE IF NOT EXISTS food_delivery_capstone;
USE food_delivery_capstone;

CREATE TABLE IF NOT EXISTS restaurants (
    restaurant_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    city VARCHAR(50) NOT NULL,
    cuisine_type VARCHAR(50) NOT NULL,
    created_at DATETIME DEFAULT CURRENT_TIMESTAMP NOT NULL
);

CREATE TABLE IF NOT EXISTS menu_items (
    item_id INT AUTO_INCREMENT PRIMARY KEY,
    restaurant_id INT NOT NULL,
    item_name VARCHAR(100) NOT NULL,
    price DECIMAL(10, 2) NOT NULL,
    category VARCHAR(50) NOT NULL,
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS orders (
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    customer_name VARCHAR(100) NOT NULL,
    restaurant_id INT NOT NULL,
    item_id INT NOT NULL,
    quantity INT NOT NULL CHECK (quantity > 0),
    total_amount DECIMAL(10, 2) NOT NULL,
    order_date DATETIME DEFAULT CURRENT_TIMESTAMP NOT NULL,
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id) ON DELETE CASCADE,
    FOREIGN KEY (item_id) REFERENCES menu_items(item_id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS order_audit (
    audit_id INT AUTO_INCREMENT PRIMARY KEY,
    order_id INT NOT NULL,
    restaurant_id INT NOT NULL,
    action VARCHAR(20) NOT NULL,
    log_time DATETIME NOT NULL
);

INSERT INTO restaurants (restaurant_id, name, city, cuisine_type, created_at) VALUES
(1, 'Tandoori Junction', 'Ahmedabad', 'North Indian', '2026-01-10 10:00:00'),
(2, 'Pizza Central', 'Surat', 'Italian', '2026-01-12 11:30:00'),
(3, 'Dragon Feast', 'Vadodara', 'Chinese', '2026-01-15 12:00:00');

INSERT INTO menu_items (item_id, restaurant_id, item_name, price, category) VALUES
(1, 1, 'Paneer Butter Masala', 260.00, 'Main Course'),
(2, 1, 'Hara Bhara Kabab', 180.00, 'Starters'),
(3, 1, 'Sweet Lassi', 70.00, 'Beverages'),
(4, 1, 'Gulab Jamun', 90.00, 'Desserts'),
(5, 2, 'Margherita Pizza', 299.00, 'Main Course'),
(6, 2, 'Cheesy Garlic Bread', 149.00, 'Starters'),
(7, 2, 'Cold Coffee', 120.00, 'Beverages'),
(8, 2, 'Choco Lava Cake', 110.00, 'Desserts'),
(9, 3, 'Veg Manchurian Gravy', 230.00, 'Main Course'),
(10, 3, 'Crispy Corn', 160.00, 'Starters'),
(11, 3, 'Iced Tea', 80.00, 'Beverages'),
(12, 3, 'Fried Ice Cream', 130.00, 'Desserts');

INSERT INTO orders (customer_name, restaurant_id, item_id, quantity, total_amount, order_date)
 VALUES
('Jesil S.', 1, 1, 2, 520.00, '2026-02-01 12:30:00'),
('Mohib M.', 1, 2, 1, 180.00, '2026-02-01 13:00:00'),
('Amit P.', 1, 3, 3, 210.00, '2026-02-02 19:15:00'),
('Sneha R.', 1, 4, 2, 180.00, '2026-02-03 20:00:00'),
('Karan V.', 1, 1, 1, 260.00, '2026-02-04 21:10:00'),
('Rohan T.', 2, 5, 2, 598.00, '2026-02-01 14:00:00'),
('Pooja K.', 2, 6, 2, 298.00, '2026-02-02 18:30:00'),
('Nikhil D.', 2, 7, 1, 120.00, '2026-02-03 19:00:00'),
('Ananya S.', 2, 8, 2, 220.00, '2026-02-04 20:45:00'),
('Hardik B.', 2, 5, 1, 299.00, '2026-02-05 21:00:00'),
('Vikas M.', 3, 9, 2, 460.00, '2026-02-01 13:15:00'),
('Janki N.', 3, 10, 2, 320.00, '2026-02-02 14:00:00'),
('Suresh G.', 3, 11, 2, 160.00, '2026-02-03 19:30:00'),
('Divya C.', 3, 12, 1, 130.00, '2026-02-04 20:15:00'),
('Manish P.', 3, 9, 1, 230.00, '2026-02-05 21:30:00');

CREATE OR REPLACE VIEW restaurant_sales_summary AS
SELECT 
    r.name AS restaurant_name,
    COUNT(o.order_id) AS total_orders,
    IFNULL(SUM(o.total_amount), 0.00) AS total_revenue
FROM restaurants r
LEFT JOIN orders o ON r.restaurant_id = o.restaurant_id
GROUP BY r.restaurant_id, r.name;

DROP TRIGGER IF EXISTS after_order_insert;

DELIMITER $$

CREATE TRIGGER after_order_insert
AFTER INSERT ON orders
FOR EACH ROW
BEGIN
    INSERT INTO order_audit (order_id, restaurant_id, action, log_time)
    VALUES (NEW.order_id, NEW.restaurant_id, 'INSERT', NOW());
END$$

DELIMITER ;

DROP PROCEDURE IF EXISTS add_order;

DELIMITER $$

CREATE PROCEDURE add_order(
    IN p_customer_name VARCHAR(100),
    IN p_restaurant_id INT,
    IN p_item_id INT,
    IN p_quantity INT
)
BEGIN
    DECLARE v_restaurant_exists INT DEFAULT 0;
    DECLARE v_item_price DECIMAL(10, 2) DEFAULT NULL;
    DECLARE v_calculated_total DECIMAL(10, 2);

    START TRANSACTION;

    SELECT COUNT(*) INTO v_restaurant_exists 
    FROM restaurants 
    WHERE restaurant_id = p_restaurant_id;

    IF v_restaurant_exists = 0 THEN
        ROLLBACK;
        SIGNAL SQLSTATE '45000' 
            SET MESSAGE_TEXT = 'Order Failed: Restaurant does not exist. Transaction rolled back.';
    ELSE
        SELECT price INTO v_item_price 
        FROM menu_items 
        WHERE item_id = p_item_id AND restaurant_id = p_restaurant_id;

        IF v_item_price IS NULL THEN
            ROLLBACK;
            SIGNAL SQLSTATE '45000' 
                SET MESSAGE_TEXT = 'Order Failed: Menu item not found for the given restaurant. Transaction rolled back.';
        ELSE
            SET v_calculated_total = v_item_price * p_quantity;

            INSERT INTO orders (customer_name, restaurant_id, item_id, quantity, total_amount, order_date)
            VALUES (p_customer_name, p_restaurant_id, p_item_id, p_quantity, v_calculated_total, NOW());

            COMMIT;
            
            SELECT 'Order placed and logged successfully!' AS status,
                   LAST_INSERT_ID() AS new_order_id,
                   v_calculated_total AS final_amount;
        END IF;
    END IF;
END$$

DELIMITER ;

SELECT * FROM restaurant_sales_summary;

CALL add_order('Jesil S.', 1, 1, 2);

SELECT * FROM orders ORDER BY order_id DESC LIMIT 1;

SELECT * FROM order_audit ORDER BY audit_id DESC LIMIT 1;


SELECT * FROM restaurant_sales_summary;