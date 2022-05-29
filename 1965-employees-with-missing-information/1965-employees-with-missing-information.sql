# Write your MySQL query statement below
SELECT employee_id 
FROM employees
where employee_id Not in(Select employee_id from Salaries)
union
Select employee_id 
FROM salaries
where employee_id Not in (Select employee_id from employees)
order by employee_id