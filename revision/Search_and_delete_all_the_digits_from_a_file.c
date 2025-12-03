#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL)
    {
        printf("Error: Cannot input file.\n");
    }
    if (fp2 == NULL)
    {
        printf("Error: cannot create output file.\n");
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        if (!isdigit(ch))
        {
            fputc(ch, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);

    printf("All digits removed successfully. Check output.txt\n");
    fp2 = fopen("output.txt", "r");
    while ((ch = fgetc(fp2)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp2);

    return 0;
}
