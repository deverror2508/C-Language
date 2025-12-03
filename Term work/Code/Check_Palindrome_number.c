#include <stdio.h>
int main()
{
    int num, rev = 0, digit, orginal;
    printf("Enter the number: ");
    scanf("%d", &num);
    orginal = num;
    while (num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if (orginal == rev)
    {
        printf("Given number is palindrome number.\n", orginal);
    }
    else
    {
        printf("Given number is not palindrome number.\n", orginal);
    }
    return 0;
}