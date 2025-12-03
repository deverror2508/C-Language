#include <stdio.h>

int main() {
    int n = 5;  // height of pyramid (middle row)

    // Upper half (including middle row)
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int s = 1; s <= n - i; s++)
            printf("  ");
        // Print increasing numbers
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int s = 1; s <= n - i; s++)
            printf("  ");
        // Print increasing numbers
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
