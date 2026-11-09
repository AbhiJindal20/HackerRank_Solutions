/*Write a query to set the Department as 'HR', for the employee with employee_id 2 to the existing table employee. */
UPDATE employee
SET Department = 'HR'
WHERE employee_id = 02;

SELECT * FROM employee;