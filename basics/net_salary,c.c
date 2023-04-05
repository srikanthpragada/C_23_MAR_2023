// Calculate net salary
// Date : 30-mar-2023

#include <stdio.h>

void main()
{
 int salary, hra, da, net_salary;

    printf("Enter salary :");
    scanf("%d", &salary);

    if(salary > 50000)
    {
       hra = salary * 30 / 100;
       da = salary * 20 / 100;
    }
    else
    {
       hra = salary * 25 / 100;
       da = salary * 15 / 100;
    }

    net_salary = salary + hra + da;

    printf("Salary       : %6d\n", salary);
    printf("+ HRA        : %6d\n", hra);
    printf("+ DA         : %6d\n", da);
    printf("Net Salary   : %6d",net_salary);
}
