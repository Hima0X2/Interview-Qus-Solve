select EmployeeUNI.unique_id,Employees.name  from Employees left join EmployeeUNI using(id);
