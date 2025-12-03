#include <stdio.h>

// Head Recursion Function
int headSum(int n)
{
    if (n == 0)
        return 0; // base case

    return n + headSum(n - 1);
}

// Tail Recursion Function
int tailSum(int n, int result)
{
    if (n == 0)
        return result;

    return tailSum(n - 1, result + n);
}

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);
    printf("Sum using Head Recursion = %d\n", headSum(n));
    printf("Sum using Tail Recursion = %d\n", tailSum(n, 0));

    return 0;
}
