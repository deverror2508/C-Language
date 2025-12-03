#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the charecter:");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Given character is '%c' Alphabat", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Given number is '%c' Number", ch);
    }
    else
    {
        printf("Given character is '%c' Special symbool", ch);
    }
    return 0;
}
