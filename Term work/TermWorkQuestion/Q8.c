#include<stdio.h>
struct Employee
{
    char name[50];
    char departement[50];
    int eID;
    int salary;
};

int main(){
    int n,i;
    printf("Enter number of employees:");
    scanf("%d",&n);
    struct Employee emp[n];
    // struct Employee *ptr = emp;

    for ( i = 0; i < n; i++)
    {
        printf("\nEnter detalis of employee %d:\n",i+1);
        printf("Name: ");
        scanf("%s",emp[i].name);
        printf("Departement: ");
        scanf("%s",emp[i].departement);
        printf("Employee ID: ");
        scanf("%d",&emp[i].eID);
        printf("Salary: ");
        scanf("%d",&emp[i].salary);
    }
     printf("\n===== Employee Records =====\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d Details:\n", i + 1);
        printf("Name       : %s\n", emp[i].name);
        printf("Department : %s\n", emp[i].departement);
        printf("Employee ID: %d\n", emp[i].eID);
        printf("Salary     : %.2f\n", emp[i].salary);
    }
    return 0;
    

}
