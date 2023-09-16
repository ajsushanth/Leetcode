# Write your MySQL query statement below
select MAX(salary) AS SecondHighestSalary
from Employee
WHERE salary = (select MAX(salary)
                 from employee
                 where salary < (select MAX(salary)
                 from employee)
                );