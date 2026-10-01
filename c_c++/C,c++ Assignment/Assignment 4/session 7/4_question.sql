CREATE VIEW TopSpendersView AS
SELECT 
    u.username, 
    fo.order_total
FROM 
    FoodOrder fo
JOIN 
    SpotifyUser u ON fo.user_id = u.user_id
WHERE 
    fo.order_total > 1000;

SELECT * FROM TopSpendersView;