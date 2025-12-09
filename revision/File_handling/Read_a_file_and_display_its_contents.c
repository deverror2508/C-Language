#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("output.txt", "r");

    if (fp1 == NULL)
    {
        printf("Error, File is empty");
    }
    while ((ch = fgetc(fp1)) != EOF) // read character by character
    {
        putchar(ch);                // print each character on screen
    }
    fclose(fp1);

    return 0;
}