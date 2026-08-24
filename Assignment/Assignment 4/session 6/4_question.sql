-- 1. Create movies table
CREATE TABLE movies (
    rating_id INT PRIMARY KEY AUTO_INCREMENT,
    movie_id INT NOT NULL,
    title VARCHAR(100) NOT NULL,
    rating DECIMAL(3, 1) NOT NULL
);

-- 2. Insert sample ratings
INSERT INTO movies (movie_id, title, rating) VALUES
(1, 'Inception', 9.0),
(1, 'Inception', 8.5),
(2, 'Interstellar', 9.5),
(2, 'Interstellar', 9.0),
(3, 'Tenet', 7.0),
(3, 'Tenet', 7.5),
(4, 'Dunkirk', 8.0),
(4, 'Dunkirk', 7.8);

-- 3. Run the nested subquery
SELECT 
    title,
    AVG(rating) AS movie_avg_rating
FROM 
    movies
GROUP BY 
    movie_id, 
    title
HAVING 
    AVG(rating) > (
        SELECT AVG(rating) 
        FROM movies
    );