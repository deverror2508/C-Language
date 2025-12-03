#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter the array lenth: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter element: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("\nSorted numbers: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}