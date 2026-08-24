SELECT 
    p.post_id,
    p.caption,
    COALESCE(i.name, 'Unknown Influencer') AS influencer_name
FROM 
    influencers i
RIGHT JOIN 
    posts p ON i.influencer_id = p.influencer_id;
    
    