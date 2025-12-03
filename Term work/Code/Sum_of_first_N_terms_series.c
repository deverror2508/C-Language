#include <stdio.h>

// Function to calculate factorial
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int N;
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    double sum1 = 0, sum2 = 0, sum3 = 0;

    // (i) S = 1 + 22/2! + 33/3! + 44/4! + …
    for (int i = 1; i <= N; i++)
    {
        sum1 += (double)(i * i) / factorial(i);
    }

    // (ii) S = 1 + 2/2! + 32/3! + 43/4! + …
    for (int i = 1; i <= N; i++)
    {
        sum2 += (double)(i * (i - 1)) / factorial(i);
    }

    // (iii) S = 1 - 2! + 3! - 4! + 5! - 6! + …
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0) // even term → subtract
            sum3 -= factorial(i);
        else // odd term → add
            sum3 += factorial(i);
    }

    printf("\nResults:\n");
    printf("Series (i): %.4lf\n", sum1);
    printf("Series (ii): %.4lf\n", sum2);
    printf("Series (iii): %.4lf\n", sum3);

    return 0;
}
