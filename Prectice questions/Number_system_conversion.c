#include <stdio.h>
int main()
{
    int decimal, num;
    int binary[32], octal[32], hex[32];
    int i, j;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    num = decimal;
    i = 0;
    if (num == 0)
    {
        binary[i++] = 0;
    }
    else
    {
        while (num > 0)
        {
            binary[i++] = num % 2;
            num /= 2;
        }
    }
    printf("Binary: ");
    for (j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
    num = decimal;
    i = 0;
    if (num == 0)
    {
        octal[i++] = 0;
    }
    else
    {
        while (num > 0)
        {
            octal[i++] = num % 8;
            num /= 8;
        }
    }
    printf("Octal: ");
    for (j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");
    num = decimal;
    i = 0;
    if (num == 0)
    {
        hex[i++] = 0;
    }
    else
    {
        while (num > 0)
        {
            int rem = num % 16;
            if (rem < 10)
                hex[i++] = rem + '0'; // 0-9
            else

                hex[i++] = rem - 10 + 'A'; // A-F
            num /= 16;
        }
    }
    printf("Hexadecimal: ");
    for (j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
    printf("\n");
    return 0;
}