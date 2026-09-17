SELECT 
    i.influencer_id,
    i.name AS influencer_name,
    COALESCE(p.caption, 'No Posts') AS caption
FROM 
    influencers i
LEFT JOIN 
    posts p ON i.influencer_id = p.influencer_id;