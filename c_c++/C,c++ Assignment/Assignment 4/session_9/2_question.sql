CREATE TABLE OrderItems (
    item_id INT PRIMARY KEY,
    order_id INT,
    item_name VARCHAR(100),
    quantity INT,
    price INT
);

START TRANSACTION;

INSERT INTO OrderItems (item_id, order_id, item_name, quantity, price)
VALUES
(1, 6, 'Veg Pizza', 1, 250),
(2, 6, 'French Fries', 2, 150);

ROLLBACK;

SELECT *
FROM OrderItems
WHERE order_id = 6;

DESCRIBE OrderItems;