DELIMITER //

CREATE TRIGGER deduct_wallet_balance
AFTER INSERT ON Wallet
FOR EACH ROW
BEGIN
    UPDATE Wallet
    SET balance = balance - NEW.purchase_amount
    WHERE user_id = NEW.user_id;
END //

DELIMITER ;