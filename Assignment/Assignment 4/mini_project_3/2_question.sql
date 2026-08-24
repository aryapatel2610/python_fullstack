INSERT IGNORE INTO users (user_id, username, email) 
VALUES 
    (101, 'john_doe', 'john@example.com'),
    (102, 'jane_smith', 'jane@example.com');

INSERT INTO playlists (user_id, name, created_at) 
VALUES 
    (101, 'Workout Mix', '2026-08-20 07:15:00'),
    (102, 'Chill Vibes', '2026-08-21 21:40:30'),
    (101, 'Top Hits', '2026-08-22 11:05:12');

SELECT * FROM playlists;