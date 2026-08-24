START TRANSACTION;

INSERT INTO orders (order_id, user_id, order_date, total_amount)
VALUES (6, 1, CURDATE(), 750);

COMMIT;

SELECT *
FROM orders
WHERE order_id = 6;