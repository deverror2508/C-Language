#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n], unique[n];
    int count = 0; // number of unique elements

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // ---- Copy unique elements ----
    for (i = 0; i < n; i++)
    {
        int found = 0;

        // Check if arr[i] is already in unique[]
        for (j = 0; j < count; j++)
        {
            if (arr[i] == unique[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        { // if element not found, add to unique[]
            unique[count] = arr[i];
            count++;
        }
    }

    // ---- Print unique array ----
    printf("\nArray after removing duplicates:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d ", unique[i]);
    }

    return 0;
}


