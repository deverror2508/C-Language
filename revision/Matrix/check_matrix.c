#include <stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter number of rows  : ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix:\n ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf(" \n");
    }
}