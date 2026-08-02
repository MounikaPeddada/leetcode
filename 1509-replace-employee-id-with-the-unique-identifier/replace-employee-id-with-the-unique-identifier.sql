# Write your MySQL query statement below
SELECT Em.unique_id, e.name 
FROM Employees AS e
LEFT JOIN EmployeeUNI AS Em
on Em.id=e.id