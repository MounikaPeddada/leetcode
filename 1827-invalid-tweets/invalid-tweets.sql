# Write your MySQL query statement below
SELECT tweet_id 
FROM Tweets
WHERE content="More than fifteen chars are here!" or LENGTH(content)>15;
