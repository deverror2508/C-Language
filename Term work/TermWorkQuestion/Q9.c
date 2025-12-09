// #include <stdio.h>
// #include <string.h>

// #define MAX 100 // maximum number of students

// struct student
// {
//     int roll;
//     char name[50];
//     float per; // percentage
// };

// int main()
// {
//     struct student s[MAX];
//     int n = 0; // current number of students
//     int choice;

//     do
//     {
//         printf("\n------ Student Menu ------\n");
//         printf("1. Insert\n");
//         printf("2. Display\n");
//         printf("3. Delete\n");
//         printf("4. Search\n");
//         printf("5. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         if (choice == 1)
//         {
//             // Insert
//             if (n >= MAX)
//             {
//                 printf("Array is full. Cannot insert more students.\n");
//             }
//             else
//             {
//                 printf("Enter roll number: ");
//                 scanf("%d", &s[n].roll);

//                 fflush(stdin); // clears leftover newline

//                 printf("Enter name: ");
//                 gets(s[n].name); // using gets

//                 printf("Enter percentage: ");
//                 scanf("%f", &s[n].per);

//                 n++;
//                 printf("Student inserted successfully.\n");
//             }
//         }

//         else if (choice == 2)
//         {
//             // Display
//             if (n == 0)
//             {
//                 printf("No records to display.\n");
//             }
//             else
//             {
//                 int i;
//                 printf("\n--- Student Records ---\n");
//                 for (i = 0; i < n; i++)
//                 {
//                     printf("Student %d:\n", i + 1);
//                     printf("  Roll : %d\n", s[i].roll);
//                     printf("  Name : %s\n", s[i].name);
//                     printf("  Per  : %.2f\n", s[i].per);
//                 }
//             }
//         }

//         else if (choice == 3)
//         {
//             // Delete by roll
//             if (n == 0)
//             {
//                 printf("No records to delete.\n");
//             }
//             else
//             {
//                 int roll, i, j, found = 0;
//                 printf("Enter roll number to delete: ");
//                 scanf("%d", &roll);

//                 for (i = 0; i < n; i++)
//                 {
//                     if (s[i].roll == roll)
//                     {
//                         found = 1;
//                         for (j = i; j < n - 1; j++)
//                         {
//                             s[j] = s[j + 1];
//                         }
//                         n--;
//                         printf("Record with roll %d deleted.\n", roll);
//                         break;
//                     }
//                 }
//                 if (!found)
//                 {
//                     printf("Record not found.\n");
//                 }
//             }
//         }

//         else if (choice == 4)
//         {
//             // Search by roll
//             if (n == 0)
//             {
//                 printf("No records to search.\n");
//             }
//             else
//             {
//                 int roll, i, found = 0;
//                 printf("Enter roll number to search: ");
//                 scanf("%d", &roll);

//                 for (i = 0; i < n; i++)
//                 {
//                     if (s[i].roll == roll)
//                     {
//                         found = 1;
//                         printf("Record found:\n");
//                         printf("  Roll : %d\n", s[i].roll);
//                         printf("  Name : %s\n", s[i].name);
//                         printf("  Per  : %.2f\n", s[i].per);
//                         break;
//                     }
//                 }
//                 if (!found)
//                 {
//                     printf("Record not found.\n");
//                 }
//             }
//         }

//         else if (choice == 5)
//         {
//             printf("Exiting program.\n");
//         }

//         else
//         {
//             printf("Invalid choice. Try again.\n");
//         }

//     } while (choice != 5);

//     return 0;
// }


#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
};

int main() {
    FILE *fp;
    struct Student s;
    int search_id, found = 0;

    // Writing data to file
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Enter Student ID: ");
    scanf("%d", &s.id);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    // Write structure to file
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    // Searching record
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("\nEnter Student ID to Search: ");
    scanf("%d", &search_id);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.id == search_id) {
            printf("\nRecord Found!\n");
            printf("Student ID: %d\n", s.id);
            printf("Student Name: %s\n", s.name);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nRecord Not Found!\n");

    fclose(fp);
    return 0;
}
