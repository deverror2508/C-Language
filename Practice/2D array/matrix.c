#include<stdio.h>
int main(){
    int n,m,i,j;
    printf("Enter the row number:");
    scanf("%d", &n);
    printf("Enter the column number");
    scanf("%d",&m);
    int arr[n][m];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    printf("Matrix output:\n");
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}