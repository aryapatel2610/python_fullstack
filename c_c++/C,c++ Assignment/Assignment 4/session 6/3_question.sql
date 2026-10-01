CREATE TABLE payments (
    payment_id INT PRIMARY KEY AUTO_INCREMENT,
    user_id INT NOT NULL,
    amount DECIMAL(10, 2) NOT NULL,
    payment_date DATE NOT NULL
);

INSERT INTO payments (user_id, amount, payment_date) VALUES
(101, 500.00, '2026-08-01'),
(102, 2500.00, '2026-08-03'),
(103, 1200.00, '2026-08-05'),
(101, 3200.00, '2026-08-10'),
(104, 1800.00, '2026-08-12'),
(105, 4500.00, '2026-08-15');

SELECT DISTINCT user_id
FROM (
    SELECT user_id, amount
    FROM payments
    WHERE amount > 2000
) AS high_value_payments;

SHOW TABLES;