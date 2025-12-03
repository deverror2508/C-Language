#include <stdio.h>
long long factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n, temp, digit;
    int sum = 0;
    printf("Enter the digit: ");
    scanf("%d", &n);
    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        sum += factorial(digit);
        temp = temp / 10;
    }
    printf("Sum of factorial %d: %ld", n, sum);
    return 0;
}