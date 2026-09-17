USE instaclone;

-- 1. જૂના Triggers અને Tables ડ્રોપ કરો (Error ન આવે તે માટે)
DROP TRIGGER IF EXISTS trg_after_expense_insert_corrected;
DROP TRIGGER IF EXISTS trg_after_expense_insert_buggy;
DROP TABLE IF EXISTS expenses;
DROP TABLE IF EXISTS wallet;

-- 2. Tables બનાવો
CREATE TABLE wallet (
    user_id INT PRIMARY KEY,
    balance DECIMAL(10, 2) NOT NULL DEFAULT 0.00
);

CREATE TABLE expenses (
    expense_id INT AUTO_INCREMENT PRIMARY KEY,
    user_id INT,
    amount DECIMAL(10, 2) NOT NULL,
    description VARCHAR(255),
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (user_id) REFERENCES wallet(user_id)
);

-- 3. સાચો Trigger બનાવો
DELIMITER $$

CREATE TRIGGER trg_after_expense_insert_corrected
AFTER INSERT ON expenses
FOR EACH ROW
BEGIN
    UPDATE wallet
    SET balance = balance - NEW.amount
    WHERE user_id = NEW.user_id;
END$$

DELIMITER ;

-- 4. Initial Data નાખો (User 1 પાસે 1000 બેલેન્સ)
INSERT INTO wallet (user_id, balance) 
VALUES (1, 1000.00);

-- 5. ખર્ચો (Expense) એડ કરો (User 1 - 150 રૂપિયા)
INSERT INTO expenses (user_id, amount, description) 
VALUES (1, 150.00, 'Groceries');

-- 6. બેલેન્સ ચેક કરો (Output 850.00 આવવું જોઈએ)
SELECT * FROM wallet WHERE user_id = 1;
SELECT * FROM expenses;