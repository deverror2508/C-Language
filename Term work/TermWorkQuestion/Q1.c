#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Step 1: Sort the array

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Step 2: Two-pointer approach
    int left = 0;
    int right = n - 1;
    int result[n];
    int k = 0;

    while (left <= right)
    {
        result[k++] = arr[left++]; // smallest element
        if (left <= right)
            result[k++] = arr[right--]; // largest element
    }

    // Print rearranged array
    printf("Rearranged Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}