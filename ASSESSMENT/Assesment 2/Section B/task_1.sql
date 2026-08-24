CREATE DATABASE foodapp_db;
USE foodapp_db;

CREATE TABLE restaurants (
    restaurant_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    city VARCHAR(50),
    cuisine_type VARCHAR(50),
    rating DECIMAL(3, 1)
);

INSERT INTO restaurants (name, city, cuisine_type, rating) 
VALUES
('Spice Symphony', 'Mumbai', 'North Indian', 4.5),
('Pizza Paradiso', 'Mumbai', 'Italian', 4.2),
('Dragon Wok', 'Delhi', 'Chinese', 3.8),
('Royal Biryani', 'Delhi', 'Mughlai', 4.7),
('Taco Fiesta', 'Bengaluru', 'Mexican', 4.0),
('Sushi Bay', 'Bengaluru', 'Japanese', 4.6);

UPDATE restaurants 
SET rating = 4.8 
WHERE restaurant_id = 1;

DELETE FROM restaurants 
WHERE restaurant_id = 3;

SELECT 
    restaurant_id, 
    name, 
    city, 
    cuisine_type, 
    rating 
FROM restaurants 
ORDER BY rating DESC;
select * from restaurants;