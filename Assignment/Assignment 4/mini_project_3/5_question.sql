DELIMITER $$

DROP PROCEDURE IF EXISTS GetMonthlyPlaylistCount$$

CREATE PROCEDURE GetMonthlyPlaylistCount (
    IN p_user_id INT,
    IN p_month INT
)
BEGIN
    SELECT COUNT(*) AS total_playlists
    FROM playlists
    WHERE user_id = p_user_id
      AND MONTH(created_at) = p_month;
END$$

DELIMITER ;


CALL GetMonthlyPlaylistCount(101, 8);