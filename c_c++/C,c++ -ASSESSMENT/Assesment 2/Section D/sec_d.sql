DROP DATABASE IF EXISTS foodapp_db;
CREATE DATABASE foodapp_db;
USE foodapp_db;

CREATE TABLE restaurants (
    restaurant_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    city VARCHAR(50),
    cuisine_type VARCHAR(50),
    rating DECIMAL(3, 1)
);

INSERT INTO restaurants (name, city, cuisine_type, rating) VALUES
('Spice Symphony', 'Mumbai', 'North Indian', 4.5),
('Pizza Paradiso', 'Mumbai', 'Italian', 4.2),
('Dragon Wok', 'Delhi', 'Chinese', 3.8),
('Royal Biryani', 'Delhi', 'Mughlai', 4.7),
('Taco Fiesta', 'Bengaluru', 'Mexican', 4.0),
('Sushi Bay', 'Bengaluru', 'Japanese', 4.6);

UPDATE restaurants SET rating = 4.8 WHERE restaurant_id = 1;

DELETE FROM restaurants WHERE restaurant_id = 3;

SELECT * FROM restaurants ORDER BY rating DESC;

CREATE TABLE orders (
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    restaurant_id INT NOT NULL,
    customer_name VARCHAR(100) NOT NULL,
    customer_id INT DEFAULT NULL,
    total_amount DECIMAL(10, 2) NOT NULL,
    order_date DATETIME NOT NULL,
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id)
);

INSERT INTO orders (restaurant_id, customer_name, total_amount, order_date) VALUES
(1, 'Aarav Patel', 2500.00, '2026-08-10 12:30:00'),
(1, 'Neha Sharma', 1800.00, '2026-08-11 19:15:00'),
(1, 'Rohan Verma', 2200.00, '2026-08-15 20:00:00'),
(2, 'Pooja Mehta', 1200.00, '2026-08-12 13:45:00'),
(2, 'Karan Shah', 1500.00, '2026-08-14 21:10:00'),
(2, 'Ananya Roy', 1100.00, '2026-08-18 14:20:00'),
(4, 'Vikram Singh', 3100.00, '2026-08-13 20:30:00'),
(4, 'Sneha Joshi', 2900.00, '2026-08-16 19:40:00'),
(4, 'Amit Nair', 1500.00, '2026-08-20 21:00:00'),
(5, 'Deepak Kumar', 800.00,  '2026-08-14 18:00:00'),
(5, 'Simran Kaur', 950.00,  '2026-08-17 12:15:00'),
(5, 'Manish Tiwari', 1250.00, '2026-08-21 13:00:00');

SELECT 
    r.restaurant_id,
    r.name AS restaurant_name,
    SUM(o.total_amount) AS total_revenue,
    ROUND(AVG(o.total_amount), 2) AS avg_order_value
FROM orders o
JOIN restaurants r ON o.restaurant_id = r.restaurant_id
GROUP BY r.restaurant_id, r.name;

SELECT 
    r.restaurant_id,
    r.name AS restaurant_name,
    SUM(o.total_amount) AS total_revenue
FROM orders o
JOIN restaurants r ON o.restaurant_id = r.restaurant_id
GROUP BY r.restaurant_id, r.name
HAVING SUM(o.total_amount) > 5000.00;

SELECT * FROM orders ORDER BY order_date DESC LIMIT 5;

CREATE TABLE menu_items (
    item_id INT AUTO_INCREMENT PRIMARY KEY,
    restaurant_id INT NOT NULL,
    item_name VARCHAR(100) NOT NULL,
    price DECIMAL(8, 2) NOT NULL,
    category VARCHAR(50),
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id)
);

INSERT INTO menu_items (restaurant_id, item_name, price, category) VALUES
(1, 'Butter Chicken', 350.00, 'Main Course'),
(1, 'Paneer Tikka', 240.00, 'Starters'),
(1, 'Garlic Naan', 60.00, 'Breads'),
(2, 'Margherita Pizza', 299.00, 'Pizza'),
(2, 'Farmhouse Pizza', 450.00, 'Pizza'),
(2, 'Garlic Breadsticks', 140.00, 'Sides'),
(4, 'Hyderabadi Chicken Biryani', 380.00, 'Main Course'),
(4, 'Mutton Dum Biryani', 490.00, 'Main Course'),
(4, 'Mirchi Ka Salan', 120.00, 'Sides'),
(5, 'Taco Supreme', 220.00, 'Mexican'),
(5, 'Loaded Nachos', 260.00, 'Mexican'),
(5, 'Churros', 180.00, 'Dessert');

SELECT r.name AS restaurant_name, m.item_name, m.price
FROM restaurants r
INNER JOIN menu_items m ON r.restaurant_id = m.restaurant_id;

SELECT r.name AS restaurant_name, m.item_name, m.price, m.category
FROM restaurants r
LEFT JOIN menu_items m ON r.restaurant_id = m.restaurant_id;

CREATE OR REPLACE VIEW restaurant_menu_summary AS
SELECT 
    r.name AS restaurant_name,
    COUNT(m.item_id) AS total_menu_items,
    IFNULL(ROUND(AVG(m.price), 2), 0.00) AS average_item_price
FROM restaurants r
LEFT JOIN menu_items m ON r.restaurant_id = m.restaurant_id
GROUP BY r.restaurant_id, r.name;

SELECT * FROM restaurant_menu_summary;

CREATE TABLE customers (
    customer_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    wallet_balance DECIMAL(10, 2) NOT NULL CHECK (wallet_balance >= 0)
);

INSERT INTO customers (customer_id, name, wallet_balance) VALUES
(1, 'Rahul Sharma', 1000.00);

DROP PROCEDURE IF EXISTS place_order;

DELIMITER $$
CREATE PROCEDURE place_order(
    IN p_customer_id INT,
    IN p_restaurant_id INT,
    IN p_amount DECIMAL(10, 2)
)
BEGIN
    DECLARE current_balance DECIMAL(10, 2) DEFAULT 0.00;
    DECLARE cust_name VARCHAR(100);

    START TRANSACTION;

    SELECT wallet_balance, name INTO current_balance, cust_name
    FROM customers
    WHERE customer_id = p_customer_id
    FOR UPDATE;

    IF current_balance IS NULL THEN
        ROLLBACK;
        SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Order Failed: Customer not found.';
    ELSEIF current_balance < p_amount THEN
        ROLLBACK;
        SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Order Failed: Insufficient wallet balance. Transaction rolled back.';
    ELSE
        UPDATE customers SET wallet_balance = wallet_balance - p_amount WHERE customer_id = p_customer_id;
        INSERT INTO orders (customer_id, restaurant_id, customer_name, total_amount, order_date)
        VALUES (p_customer_id, p_restaurant_id, cust_name, p_amount, NOW());
        COMMIT;
        SELECT 'Order placed successfully!' AS status, (current_balance - p_amount) AS updated_balance;
    END IF;
END$$
DELIMITER ;

DROP DATABASE IF EXISTS food_delivery_capstone;
CREATE DATABASE food_delivery_capstone;
USE food_delivery_capstone;

CREATE TABLE restaurants (
    restaurant_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    city VARCHAR(50) NOT NULL,
    cuisine_type VARCHAR(50) NOT NULL,
    created_at DATETIME DEFAULT CURRENT_TIMESTAMP NOT NULL
);

CREATE TABLE menu_items (
    item_id INT AUTO_INCREMENT PRIMARY KEY,
    restaurant_id INT NOT NULL,
    item_name VARCHAR(100) NOT NULL,
    price DECIMAL(10, 2) NOT NULL,
    category VARCHAR(50) NOT NULL,
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id) ON DELETE CASCADE
);

CREATE TABLE orders (
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

CREATE TABLE order_audit (
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

INSERT INTO orders (customer_name, restaurant_id, item_id, quantity, total_amount, order_date) VALUES
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

    SELECT COUNT(*) INTO v_restaurant_exists FROM restaurants WHERE restaurant_id = p_restaurant_id;

    IF v_restaurant_exists = 0 THEN
        ROLLBACK;
        SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Order Failed: Restaurant does not exist. Transaction rolled back.';
    ELSE
        SELECT price INTO v_item_price FROM menu_items WHERE item_id = p_item_id AND restaurant_id = p_restaurant_id;

        IF v_item_price IS NULL THEN
            ROLLBACK;
            SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Order Failed: Menu item not found for the given restaurant.';
        ELSE
            SET v_calculated_total = v_item_price * p_quantity;
            INSERT INTO orders (customer_name, restaurant_id, item_id, quantity, total_amount, order_date)
            VALUES (p_customer_name, p_restaurant_id, p_item_id, p_quantity, v_calculated_total, NOW());
            COMMIT;
            SELECT 'Order placed and logged successfully!' AS status, LAST_INSERT_ID() AS new_order_id, v_calculated_total AS final_amount;
        END IF;
    END IF;
END$$
DELIMITER ;

DROP PROCEDURE IF EXISTS get_monthly_restaurant_summary;

DELIMITER $$
CREATE PROCEDURE get_monthly_restaurant_summary(
    IN p_restaurant_id INT,
    IN p_month INT
)
BEGIN
    DECLARE v_restaurant_exists INT DEFAULT 0;
    DECLARE v_order_count INT DEFAULT 0;
    DECLARE v_restaurant_name VARCHAR(100);

    IF p_month < 1 OR p_month > 12 THEN
        SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Invalid input: Month must be an integer between 1 and 12.';
    END IF;

    SELECT COUNT(*), MAX(name) INTO v_restaurant_exists, v_restaurant_name
    FROM restaurants WHERE restaurant_id = p_restaurant_id;

    IF v_restaurant_exists = 0 THEN
        SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Error: Restaurant ID does not exist in the database.';
    END IF;

    SELECT COUNT(*) INTO v_order_count
    FROM orders WHERE restaurant_id = p_restaurant_id AND MONTH(order_date) = p_month;

    IF v_order_count = 0 THEN
        SELECT v_restaurant_name AS restaurant_name, p_month AS summary_month, 'No orders placed in this month.' AS status_message;
    ELSE
        SELECT 
            r.name AS restaurant_name,
            MONTHNAME(o.order_date) AS order_month,
            COUNT(o.order_id) AS total_orders,
            IFNULL(SUM(o.total_amount), 0.00) AS total_revenue,
            IFNULL(ROUND(AVG(o.total_amount), 2), 0.00) AS avg_order_value
        FROM restaurants r
        JOIN orders o ON r.restaurant_id = o.restaurant_id
        WHERE r.restaurant_id = p_restaurant_id AND MONTH(o.order_date) = p_month
        GROUP BY r.restaurant_id, r.name, MONTHNAME(o.order_date);
    END IF;
END$$
DELIMITER ;