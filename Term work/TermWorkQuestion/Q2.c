#include <stdio.h>

int main()
{
    int arr[10][10], n, i, j;
    int flag = 1; // assume it is identity

    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check identity condition
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                flag = 0; // diagonal must be 1
            }
            else if (i != j && arr[i][j] != 0)
            {
                flag = 0; // non-diagonal must be 0
            }
        }
    }

    if (flag == 1)
        printf("The matrix is an Identity Matrix.\n");
    else
        printf("The matrix is NOT an Identity Matrix.\n");

    return 0;
}
