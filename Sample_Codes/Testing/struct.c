/* Create an employee record with emp-no, name, age, year of joining and salary. Compute the year of retirement of an employee and the
   salary at that time if the salary hike per annum is 20%. [Standard age of retirement is 55]  */

#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    char name[30];
    int emp_n0;
    int age;
    int salary;
    int joining_year;
    int ret_year;
    int ret_salary;
};

int main()
{
    struct Employee emp[3];
    printf("\n\n>> Enter employee records of 3 employees:");

    for (int i = 0; i < 3; i++)
    {
        printf("\n\n>> Employee %d details -\n\n", i + 1);
        printf("> Name: ");
        scanf("%s", emp[i].name);
        printf("> Age:  ");
        scanf("%d", &emp[i].age);
        printf("> Employee Number: ");
        scanf("%d", &emp[i].emp_n0);
        printf("> Year of Joining: ");
        scanf("%d", &emp[i].joining_year);
        printf("> Salary: ");
        scanf("%d", &emp[i].salary);

        emp[i].ret_year = emp[i].joining_year + (55 - emp[i].age);
        emp[i].ret_salary = emp[i].salary * (1 + (20 * (55 - emp[i].age)));
    }

    printf("\n\n-- Entered Employee Details are:");

    for (int i = 0; i < 3; i++)
    {
        printf("\n\n>> Employee %d details:\n", i + 1);
        printf("\n> Employee Number:  %d", emp[i].emp_n0);
        printf("\n> Name:  %s", emp[i].name);
        printf("\n> Age:  %d", emp[i].age);
        printf("\n> Starting Salary:  %d", emp[i].salary);
        printf("\n> Joining Year:  %d", emp[i].joining_year);
        printf("\n> Retirement Year: %d", emp[i].ret_year);
        printf("\n> Salary at Retirement:  %d", emp[i].ret_salary);
    }

    printf("\n\n");
    return 0;
}