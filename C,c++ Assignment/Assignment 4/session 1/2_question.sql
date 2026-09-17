create database InstaClone;

use InstaClone;

create table Users (
    user_id int primary key,
    username varchar(100),
    email varchar(100),
    followers_count int
);