CREATE TABLE SpotifyUser (
    user_id INT PRIMARY KEY,
    username VARCHAR(50) UNIQUE NOT NULL,
    email VARCHAR(255) NOT NULL,
    subscription_type VARCHAR(50)
);

INSERT INTO SpotifyUser (user_id, username, email, subscription_type) 
VALUES
(1, 'alex_m', 'alex.m@example.com', 'Premium Individual'),
(2, 'beatlover99', 'sarah.t@example.com', 'Free'),
(3, 'charlie_z', 'charlie.z@example.com', 'Premium Student'),
(4, 'dj_dan', 'dan.k@example.com', 'Premium Duo'),
(5, 'emma_w', 'emma.watson@example.com', 'Premium Family'),
(6, 'frankie_grooves', 'frankie.g@example.com', 'Free');

select * from SpotifyUser;