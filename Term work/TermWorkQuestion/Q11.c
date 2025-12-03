#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    char filename[] = "C:Data.txt";   // absolute path

    int alphabets = 0, digits = 0, spaces = 0, special = 0, lines = 1;

    // -------- WRITE DATA TO FILE --------
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter data to write in file (Press ~ to stop):\n");

    while ((ch = getchar()) != '~')
    {
        fputc(ch, fp);
    }

    fclose(fp);

    // -------- READ DATA FROM FILE --------
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\n--- File Content ---\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);

        if (isalpha(ch))
            alphabets++;
        else if (isdigit(ch))
            digits++;
        else if (isspace(ch))
        {
            spaces++;
            if (ch == '\n')
                lines++;
        }
        else
            special++;
    }

    fclose(fp);

    // -------- DISPLAY RESULTS --------
    printf("\n\n--- File Analysis ---\n");
    printf("Total Alphabets      : %d\n", alphabets);
    printf("Total Digits         : %d\n", digits);
    printf("Total White Spaces   : %d\n", spaces);
    printf("Total Special Char   : %d\n", special);
    printf("Total Lines          : %d\n", lines);

    return 0;
}
