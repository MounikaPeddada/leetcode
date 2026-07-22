#here b manager id means b is the employee so a is the manager
select b.name as Employee
from Employee as a
inner join Employee as b
on a.id=b.managerId 
where b.salary>a.salary;