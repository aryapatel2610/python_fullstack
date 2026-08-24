
DROP PROCEDURE IF EXISTS FetchProductNames;
DROP TABLE IF EXISTS PRODUCTS;

CREATE TABLE PRODUCTS (
    product_id INT PRIMARY KEY AUTO_INCREMENT,
    product_name VARCHAR(255) NOT NULL
);

INSERT INTO PRODUCTS (product_name) VALUES 
('Laptop'),
('Smartphone'),
('Headphones'),
('Smartwatch');

DELIMITER $$

CREATE PROCEDURE FetchProductNames()
BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE v_product_name VARCHAR(255);

    DECLARE c_products CURSOR FOR 
        SELECT product_name FROM PRODUCTS;

    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN c_products;

    read_loop: LOOP
        FETCH c_products INTO v_product_name;
        IF done THEN
            LEAVE read_loop;
        END IF;
        
        SELECT v_product_name AS product_name;
    END LOOP;

    CLOSE c_products;
END$$

DELIMITER ;

CALL FetchProductNames();