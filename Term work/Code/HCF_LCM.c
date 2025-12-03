#include <stdio.h>

int main()
{
    int a, b, x, y, hcf, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find HCF using Euclidean algorithm
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    // Calculate LCM
    lcm = (x * y) / hcf;

    printf("HCF = %d\n", hcf);
    printf("LCM = %d\n", lcm);

    return 0;
}
