#include <stdio.h>
int main()
{
    int n, i;
    long long f = 1;
    printf("Enter the number to find a factorial: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Enter the valid factorial: ");
    }
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    printf("Fact %d: %d", n, f);
    return 0;
}