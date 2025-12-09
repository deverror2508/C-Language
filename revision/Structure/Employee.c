#include <stdio.h>
#include<conio.h>
#include<ctype.h>

struct Employee {
    int empId;
    char name[50];
    char department[50];
    int salary;
};

int main()
{
    int i, n;

    printf("Employee number: ");
    scanf("%d", &n);

    struct Employee e[n];    // declare AFTER reading n

    for (i = 0; i < n; i++)
    {
        printf("\n--- Enter Details of Employee %d ---\n", i+1);

        printf("Enter EMP ID: ");
        scanf("%d", &e[i].empId);

        printf("Enter EMP Name: ");
        getc(e[i].name);      // avoid gets()

        printf("Enter Department Name: ");
        getc(e[i].department);

        printf("Enter EMP Salary: ");
        scanf("%d", &e[i].salary);
    }

    printf("\n\n--- Employee Details ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i+1);
        printf("Emp ID: %d\n", e[i].empId);
        puts(e[i].name);
        puts(e[i].department);
        printf("Salary: %d\n", e[i].salary);
    }

    return 0;
}
