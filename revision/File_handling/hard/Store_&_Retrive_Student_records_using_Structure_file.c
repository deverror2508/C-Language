#include <stdio.h>
#include<ctype.h>
#include<string.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct student s;
    int n, i;

    fp = fopen("students.dat", "wb");    // write in binary

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Name: ");
        gets(s.name);

        printf("Marks: ");
        scanf("%f", &s.marks);

        fwrite(&s, sizeof(s), 1, fp);   // write structure to file
    }

    fclose(fp);

    // ---------------- Retrieve Data ------------------

    fp = fopen("students.dat", "rb");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n\n----- Student Records -----\n");

    while (fread(&s, sizeof(s), 1, fp)) {
        printf("\nRoll: %d\n", s.roll);
        printf("Name: %s\n", s.name);
        printf("Marks: %.2f\n", s.marks);
    }

    fclose(fp);

    return 0;
}
