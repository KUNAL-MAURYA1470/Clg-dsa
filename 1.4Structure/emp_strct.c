/*Write a program to create a strcture of employee with members emp_id,emp_name,emp_designation,emp_department.
Insert 10 employees information and implement the dolowing function using menu driven method.
@ highest salary among all employee
@No of employee in specific department
@display all records.
*/
#include <stdio.h>
#include <stdlib.h>
 struct employee{
    
    char emp_name[30];
    int emp_id;
    char emp_designation[30];
    char emp_department[30];
    int emp_salary;
 
}emp[20];
int main()
{
    int i,high,n;
    printf("enter no. of employees:");
    scanf("%d",&n);
    printf("\n");
    printf("Enter details for %d employees:",n);
     printf("\n-----------------------------\n");
     for(i=0;i<n;i++)
     {printf("employee:%d\n",i+1);
          printf("Employee ID: ");
          scanf("%d",&emp[i].emp_id);
          printf("Name           : ");
          scanf("%s",emp[i].emp_name);
          printf("Salary         : ");
          scanf("\n %d",&emp[i].emp_salary);
           printf("Designation   : ");
          scanf("\n %s",emp[i].emp_designation);
           printf("Department    : ");
          scanf("\n %s",emp[i].emp_department);

          printf("-----------------------------\n");
     }
     high=emp[0].emp_salary;
     for(i=0;i<n;i++)
     {
          if(emp[i].emp_salary>high)
          high=emp[i].emp_salary;
     }
     printf("Highest salary employee details:");
     printf("\n-----------------------------\n");
     printf("EMPNO    NAME  SALARY\n");
     for(i=0;i<n;i++)
     {
          if(emp[i].emp_salary==high)
          printf("\n %d\t%s\t%d",emp[i].emp_id,emp[i].emp_name,emp[i].emp_salary);
     }
     return 0;
}

