#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input order of first matrix
    printf("Enter rows and columns of Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    // Input order of second matrix
    printf("Enter rows and columns of Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication possibility
    if (c1 != r2) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Columns of Matrix 1 must equal rows of Matrix 2.\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    // Input Matrix 1
    printf("\nEnter elements of Matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix 2
    printf("\nEnter elements of Matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Resultant Matrix
    printf("\nResultant Matrix (A × B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Transpose of Resultant Matrix
    printf("\nTranspose of Resultant Matrix:\n");
    for (int i = 0; i < c2; i++) {
        for (int j = 0; j < r1; j++) {
            printf("%d ", C[j][i]);
        }
        printf("\n");
    }
    return 0;
}
