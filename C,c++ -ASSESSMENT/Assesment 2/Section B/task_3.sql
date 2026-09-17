USE foodapp_db;

CREATE TABLE IF NOT EXISTS restaurants (
    restaurant_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    city VARCHAR(50)
);

CREATE TABLE IF NOT EXISTS menu_items (
    item_id INT AUTO_INCREMENT PRIMARY KEY,
    restaurant_id INT NOT NULL,
    item_name VARCHAR(100) NOT NULL,
    price DECIMAL(8, 2) NOT NULL,
    category VARCHAR(50),
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id)
);

INSERT INTO restaurants (name, city) VALUES
('Spice Symphony', 'Mumbai'),
('Pizza Paradiso', 'Mumbai'),
('Dragon Wok', 'Delhi'),
('Royal Biryani', 'Delhi'),
('Ocean Grill', 'Bengaluru');

INSERT INTO menu_items (restaurant_id, item_name, price, category) VALUES
(1, 'Butter Chicken', 350.00, 'Main Course'),
(1, 'Paneer Tikka', 240.00, 'Starters'),
(1, 'Garlic Naan', 60.00, 'Breads'),
(2, 'Margherita Pizza', 299.00, 'Pizza'),
(2, 'Farmhouse Pizza', 450.00, 'Pizza'),
(2, 'Garlic Breadsticks', 140.00, 'Sides'),
(3, 'Kung Pao Chicken', 320.00, 'Main Course'),
(3, 'Veg Hakka Noodles', 210.00, 'Noodles'),
(3, 'Spring Rolls', 180.00, 'Starters'),
(4, 'Hyderabadi Chicken Biryani', 380.00, 'Main Course'),
(4, 'Mutton Dum Biryani', 490.00, 'Main Course'),
(4, 'Mirchi Ka Salan', 120.00, 'Sides');

SELECT 
    r.name AS restaurant_name,
    m.item_name,
    m.price
FROM restaurants r
INNER JOIN menu_items m ON r.restaurant_id = m.restaurant_id;

SELECT 
    r.name AS restaurant_name,
    m.item_name,
    m.price,
    m.category
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

SELECT restaurant_id, name FROM restaurants;