use instaclone;

CREATE TABLE playlists (
playlist_id INT PRIMARY KEY AUTO_INCREMENT,
title VARCHAR(50),
created_by VARCHAR(50),
created_at DATE
);

select * from playlists;