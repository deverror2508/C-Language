#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d", &year);
    if ((year % 4 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Given year is leep year :\n", year);
    }
    else
    {
        printf("Given year is Not leep year :\n", year);
    }
    return 0;
}