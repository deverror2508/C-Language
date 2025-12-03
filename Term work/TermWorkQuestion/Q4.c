#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        if (freq[i] == 0)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        freq[i] = count;
    }

    printf("\nUnique numbers are: ");
    for (int i = 0; i < n; i++)
    {
        if (freq[i] == 1)
            printf("%d ", arr[i]);
    }

    printf("\nDuplicate numbers are: ");
    for (int i = 0; i < n; i++)
    {
        if (freq[i] > 1)
            printf("%d ", arr[i]);
    }

    printf("\n\nOccurrences of each number:\n");
    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d : %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
