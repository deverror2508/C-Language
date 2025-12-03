#include <stdio.h>
int main()
{
    int i, j, n, m;
    printf("Enter rows number: ");
    scanf("%d", &m);
    printf("Enter column number: ");
    scanf("%d", &n);

    
    int arr[m][n];
    printf("Enter a matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
