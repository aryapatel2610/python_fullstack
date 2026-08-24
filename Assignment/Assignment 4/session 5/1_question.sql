
-- CREATE TABLE influencers (
--     influencer_id INT PRIMARY KEY,
--     name VARCHAR(100) NOT NULL
-- );

-- CREATE TABLE posts (
--     post_id INT PRIMARY KEY,
--     influencer_id INT NOT NULL,
--     caption TEXT NOT NULL,
--     FOREIGN KEY (influencer_id) REFERENCES influencers(influencer_id) ON DELETE CASCADE
-- );

-- INSERT INTO influencers (influencer_id, name) VALUES
-- (1, 'Alex Rivera'),
-- (2, 'Maya Chen'),
-- (3, 'Liam Patel');

-- INSERT INTO posts (post_id, influencer_id, caption) VALUES

-- (101, 1, 'Exploring the hidden alleys of Tokyo at sunrise! 🌅 #travel #japan'),
-- (102, 1, 'Quick morning coffee setup before editing today’s vlog. ☕️✨'),

-- (103, 2, 'My top 5 tips for clean and maintainable UI design. 💻🎨'),
-- (104, 2, 'Desk workspace tour is finally live on my channel! Link in bio. 🚀'),

-- (105, 3, 'Post-workout protein smoothie recipe you need to try. 🥑🥤'),
-- (106, 3, 'Consistency beats motivation every single time. Stay focused! 💪');

select * from influencers;
SELECT * FROM posts;