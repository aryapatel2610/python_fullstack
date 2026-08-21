use instaclone;

create table posts(
post_id int ,
user_id int,
caption varchar(50),
post_date date ,
foreign key (user_id) references users(user_id)
);

select * from posts;