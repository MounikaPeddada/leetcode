# Write your MySQL query statement below
SELECT stu.student_id,stu.student_name,s.subject_name,count(e.subject_name) AS attended_exams
FROM Students stu
CROSS JOIN Subjects s
LEFT JOIN Examinations e
ON stu.student_id=e.student_id AND s.subject_name = e.subject_name
GROUP BY stu.student_id ,s.subject_name
ORDER BY stu.student_id , s.subject_name;