USE foodapp_db;

-- 1. Create customers table and insert test record
CREATE TABLE IF NOT EXISTS customers (
    customer_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    wallet_balance DECIMAL(10, 2) NOT NULL DEFAULT 0.00
);

INSERT INTO customers (customer_id, name, wallet_balance) VALUES
(1, 'Rahul Sharma', 1000.00)
ON DUPLICATE KEY UPDATE wallet_balance = 1000.00;

-- 2. Create the Stored Procedure
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

    -- Start Transaction
    START TRANSACTION;

    -- Fetch current wallet balance
    SELECT wallet_balance, name INTO current_balance, cust_name
    FROM customers
    WHERE customer_id = p_customer_id
    FOR UPDATE;

    -- Check conditions
    IF current_balance IS NULL THEN
        ROLLBACK;
        SIGNAL SQLSTATE '45000' 
            SET MESSAGE_TEXT = 'Order Failed: Customer not found.';
    ELSEIF current_balance < p_amount THEN
        ROLLBACK;
        SIGNAL SQLSTATE '45000' 
            SET MESSAGE_TEXT = 'Order Failed: Insufficient wallet balance. Transaction rolled back.';
    ELSE
        -- Deduct from wallet
        UPDATE customers
        SET wallet_balance = wallet_balance - p_amount
        WHERE customer_id = p_customer_id;

        -- Record order
        INSERT INTO orders (customer_id, restaurant_id, customer_name, total_amount, order_date)
        VALUES (p_customer_id, p_restaurant_id, cust_name, p_amount, NOW());

        -- Commit changes
        COMMIT;
        SELECT 'Order placed successfully!' AS status, 
               p_customer_id AS customer_id, 
               (current_balance - p_amount) AS updated_balance;
    END IF;
END$$

DELIMITER ;