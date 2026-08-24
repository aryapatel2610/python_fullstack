USE foodapp_db;

CREATE TABLE IF NOT EXISTS orders (
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    restaurant_id INT NOT NULL,
    customer_name VARCHAR(100) NOT NULL,
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
    ROUND(AVG(o.total_amount), 2) AS average_order_value
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

SELECT 
    order_id,
    restaurant_id,
    customer_name,
    total_amount,
    order_date
FROM orders
ORDER BY order_date DESC
LIMIT 5;