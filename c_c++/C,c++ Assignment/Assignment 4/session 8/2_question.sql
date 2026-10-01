DELIMITER //

CREATE PROCEDURE check_delivery()
BEGIN
    DECLARE order_amount DECIMAL(10,2);

    SET order_amount = 600;

    IF order_amount > 500 THEN
        SELECT 'Eligible for free delivery' AS Message;
    ELSE
        SELECT 'Delivery charges apply' AS Message;
    END IF;
END //

DELIMITER ;

CALL check_delivery();