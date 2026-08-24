SELECT 
    posts.caption,
    influencers.name AS influencer_name
FROM 
    posts
INNER JOIN 
    influencers ON posts.influencer_id = influencers.influencer_id;