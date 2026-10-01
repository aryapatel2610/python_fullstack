CREATE TABLE FoodOrder (
    order_id INT PRIMARY KEY,
    restaurant_id INT NOT NULL,
    user_id INT NOT NULL,
    order_total DECIMAL(10, 2) NOT NULL,
    FOREIGN KEY (restaurant_id) REFERENCES Restaurant(id)
);
select * from FoodOrder;