#include <stdio.h>

struct Time {
    int hr, min, sec;
};

int main() {
    struct Time t1, t2, sum;

    // Input first time
    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hr, &t1.min, &t1.sec);

    // Input second time
    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hr, &t2.min, &t2.sec);

    // Add seconds
    sum.sec = t1.sec + t2.sec;
    sum.min = t1.min + t2.min + sum.sec / 60;
    sum.sec = sum.sec % 60;

    // Add minutes
    sum.hr = t1.hr + t2.hr + sum.min / 60;
    sum.min = sum.min % 60;

    // Display results
    printf("\nFirst Time : %02d:%02d:%02d", t1.hr, t1.min, t1.sec);
    printf("\nSecond Time: %02d:%02d:%02d", t2.hr, t2.min, t2.sec);
    printf("\nAdded Time : %02d:%02d:%02d\n", sum.hr, sum.min, sum.sec);

    return 0;
}
