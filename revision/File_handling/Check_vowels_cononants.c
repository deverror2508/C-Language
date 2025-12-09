#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp;
    int ch, vowels = 0, consonants = 0;
    fp = fopen("output.txt", "r");
    if (fp == NULL)
    {
        printf("Error: File not found.");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
                consonants++;
        }
    }
    fclose(fp);
    printf("Vowels:%d \nConsonant:%d", vowels, consonants);
    return 0;
}