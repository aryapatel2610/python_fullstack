USE instaclone;
SELECT genre, SUM(play_count) AS total_plays
FROM Playlist
GROUP BY genre;