#include <stdio.h>
struct Student
{
    int id;
    char name[50];
    int roll;
};
int main()
{
    int n, i, choice;
    printf("Enter student length : ");
    scanf("%d", &n);
    struct Student s[n];

    do
    {
        printf("------------Student menu----------");
        printf("1. Insert");
        printf("2. Display");
        printf("3. Delete");
        printf("4. Search");
        switch (choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            Display();
            break;
        case 3:
            Delete();
            break;
        case 4:
            Search();

        default:
            printf("Invalid choice");
            break;
        }

    } while (choice != 5);

    create()
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter Student  id: ");
            scanf("%d", &s[i].id);
            printf("Enter Student Name: ")
                fflush(stdin);
            gets(s[i].name);
            printf("Enter student Roll Number: ");
            scanf("%d", &s[i].roll);
        }
    }
    display()
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter Student  id: %d", s[i].id);
            printf("Enter Student Name: ")
                puts(s[i].name);
            printf("Enter student Roll Number: %d", s[i].roll);
        }
    }
}
