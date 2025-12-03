#include <stdio.h>

int reverse(int n)
{
    static int r = 0, digit;
    if (n == 0)
    {
        return (r);
    }
    digit = n % 10;
    r = r * 10 + digit;
    n = n / 10;
    reverse(n);
}

int main()
{
    int n, rev, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;
    rev = reverse(n);
    if (rev == temp)
    {
        printf("Given number is %d palindrom: ", rev);
    }
    else
    {
        printf("Not a palidrome number:");
    }

    printf("\nReverse: %d", rev);
    return 0;
}