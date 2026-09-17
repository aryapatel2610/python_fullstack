USE instaclone;
-- CREATE TABLE Playlist (
--     id INT PRIMARY KEY AUTO_INCREMENT,
--     song_name VARCHAR(100),
--     artist VARCHAR(100),
--     genre VARCHAR(50),
--     play_count INT
-- );

INSERT INTO Playlist (song_name, artist, genre, play_count)
VALUES
('Blinding Lights', 'The Weeknd', 'Pop', 120),
('Shape of You', 'Ed Sheeran', 'Pop', 150),
('Believer', 'Imagine Dragons', 'Rock', 100),
('Perfect', 'Ed Sheeran', 'Romantic', 90),
('Heat Waves', 'Glass Animals', 'Indie Pop', 110);

select * from Playlists;