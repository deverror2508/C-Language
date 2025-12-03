#include <stdio.h>

struct Employee
{
    char name[50];
    char dept[50];
    int eid;
    float sal;
    int age;
};

int main()
{
    FILE *fp;
    struct Employee e;
    char filename[] = "C:Emp.dat";   // Absolute file path

    // ---------------- WRITE INTO FILE ----------------
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter Employee Name: ");
    gets(e.name);

    printf("Enter Department: ");
    gets(e.dept);

    printf("Enter Employee ID: ");
    scanf("%d", &e.eid);

    printf("Enter Salary: ");
    scanf("%f", &e.sal);

    printf("Enter Age: ");
    scanf("%d", &e.age);

    // Write in formatted manner
    fprintf(fp, "Name: %s\nDepartment: %s\nEID: %d\nSalary: %.2f\nAge: %d\n",
            e.name, e.dept, e.eid, e.sal, e.age);

    fclose(fp);


    // ---------------- READ FROM FILE ----------------
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\n--- Employee Details From File ---\n");

    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);   // Display file content
    }

    fclose(fp);

    return 0;
}
