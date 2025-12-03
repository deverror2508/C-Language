#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("Student.txt", "r");

    if(fp == NULL){
        printf("File cannot be opened");
        return 1;
    }

    char str[50];

    fscanf(fp, "%s", str);     // reads one word
    printf("fscanf: %s\n", str);

    fgets(str, 50, fp);        // reads a whole line
    printf("fgets: %s", str);

    char ch = fgetc(fp);       // reads one character
    printf("\nfgetc: %c\n", ch);

    fclose(fp);
    return 0;
}
