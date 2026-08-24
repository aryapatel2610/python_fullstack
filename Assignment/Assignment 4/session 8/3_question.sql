DELIMITER $$

CREATE PROCEDURE PrintNumbers()
BEGIN
    DECLARE v_counter INT DEFAULT 1;

    WHILE v_counter <= 5 DO
        SELECT v_counter;
        SET v_counter = v_counter + 1;
    END WHILE;
END$$

DELIMITER ;
CALL PrintNumbers();