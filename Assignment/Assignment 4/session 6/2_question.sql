SELECT 
    name,
    AVG(rating) AS average_rating
FROM 
    restaurants
GROUP BY 
    name
HAVING 
    AVG(rating) > 4.0;
    
DESCRIBE restaurants;