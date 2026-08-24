SELECT 
    username, 
    order_total
FROM 
    TopSpendersView
WHERE 
    order_total > 2000
ORDER BY 
    order_total DESC;

SELECT * FROM TopSpendersView;