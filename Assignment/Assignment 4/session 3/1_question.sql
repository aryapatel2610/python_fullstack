use instaclone;

-- CREATE TABLE Restaurants (
--     id INT AUTO_INCREMENT PRIMARY KEY,
--     name VARCHAR(100),
--     cuisine VARCHAR(50),
--     rating DECIMAL(2,1),
--     city VARCHAR(50)
-- );

INSERT INTO Restaurants (name, cuisine, rating, city)
VALUES
('Spice Garden', 'Indian', 4.5, 'Ahmedabad'),
('Pizza House', 'Italian', 4.2, 'Surat'),
('Dragon Palace', 'Chinese', 4.3, 'Rajkot'),
('Burger Point', 'American', 4.1, 'Vadodara'),
('Sushi World', 'Japanese', 4.7, 'Gandhinagar');

select * from Restaurants;