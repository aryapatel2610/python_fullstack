DROP PROCEDURE IF EXISTS DivideNumbers;

DELIMITER $$

CREATE PROCEDURE DivideNumbers(IN num1 DECIMAL(10, 2), IN num2 DECIMAL(10, 2))
BEGIN
    IF num2 = 0 THEN
        SELECT 'Cannot divide by zero' AS Message;
    ELSE
        SELECT (num1 / num2) AS Result;
    END IF;
END$$

DELIMITER ;

CALL DivideNumbers(10, 0);