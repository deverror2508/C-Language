#include<stdio.h>

int main() {
    int a, b, c;

    // Step 1: Input three sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Step 2: Check triangle validity
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is valid.\n");

        // Step 3: Check type of triangle
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        }
        else {
            printf("It is a Scalene triangle.\n");
        }
    }
    else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
