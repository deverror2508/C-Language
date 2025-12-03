#include <stdio.h>
int main()
{
    int n, key, i;
    printf("Enter a array lenth: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (sorted in ascending order):\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the Seaech element:");
    scanf("%d", &key);
    printf("\nElement is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    int mid, high = n - 1, low = 0;
    int found = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            found = 1;
            break;
        }
        else
        {
            if (key > arr[mid])
            {
                low = mid + i;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    if (found == 1)
    {
        printf("\nSearching element of possition :%d", mid);
        printf("\nSearching is Succesful");
    }else{
        printf("\nElement is not present in the array");
    }

    return 0;
}