CREATE TABLE Cart (
    cart_id INT PRIMARY KEY,
    user_id INT,
    product_name VARCHAR(100),
    quantity INT,
    price INT
);

START TRANSACTION;

INSERT INTO Cart (cart_id, user_id, product_name, quantity, price)
VALUES (1, 1, 'Laptop', 1, 50000);

SAVEPOINT product_added;

INSERT INTO Cart (cart_id, user_id, product_name, quantity, price)
VALUES (2, 1, 'Mouse', 1, 1000);

ROLLBACK TO SAVEPOINT product_added;

SELECT *
FROM Cart;