use instaclone;

create table restaurants(
id int primary key auto_increment,
name varchar(50),
location varchar(100),
rating decimal(2,1)
);
select * from restaurants;