#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates (simple method)
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = arr[n - 1]; // Move last element to this position
                n--;                 // Reduce size
                j--;                 // Check this new element again
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
