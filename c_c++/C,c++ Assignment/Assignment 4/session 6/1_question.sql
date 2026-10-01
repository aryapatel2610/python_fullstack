
CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    user_id INT NOT NULL,
    order_date DATE,
    total_amount DECIMAL(10, 2)
);

INSERT INTO orders (order_id, user_id, order_date, total_amount) VALUES
(1, 101, '2026-08-01', 499.00),
(2, 101, '2026-08-05', 1200.00),
(3, 102, '2026-08-10', 350.00),
(4, 101, '2026-08-15', 799.00),
(5, 103, '2026-08-18', 2100.00);

SELECT 
    user_id,
    COUNT(order_id) AS order_count
FROM 
    orders
GROUP BY 
    user_id;