# Write your MySQL query statement below
SELECT w2.id AS Id
FROM Weather AS w1
JOIN Weather AS w2
ON DATEDIFF(W2.recordDate,w1.recordDate)=1
WHERE w1.temperature < w2.temperature ;
