#include <stdio.h>
int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("\nDecimal      : %d", num);
    printf("\nBinary       : ");
    int binary[32], i = 0, n = num;
    if (n == 0) {
        printf("0");
    } else {
        while (n > 0) {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
    printf("\nOctal        : %o", num);
    printf("\nHexadecimal  : %X\n", num);
    return 0;
}
