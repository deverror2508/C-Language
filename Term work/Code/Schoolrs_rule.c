#include <stdio.h>

int main() {
    // ---------- PART 1: SCHOLARSHIP ----------
    float s1, s2, s3, total3, per3, scholarship, netAmount;
    const float semesterFee = 125000.0;

    printf("Enter marks in 3 subjects (out of 100 each): ");
    scanf("%f %f %f", &s1, &s2, &s3);

    total3 = s1 + s2 + s3;
    per3 = (total3 / 300) * 100;  // percentage for 3 subjects

    // Scholarship rules
    if (per3 < 50) {
        scholarship = 0;
    } else if (per3 >= 51 && per3 <= 60) {
        scholarship = 0.05 * semesterFee;
    } else if (per3 >= 61 && per3 <= 74) {
        scholarship = 0.20 * semesterFee;
    } else if (per3 >= 75 && per3 <= 84) {
        scholarship = 0.30 * semesterFee;
    } else {
        scholarship = 0.50 * semesterFee;
    }

    netAmount = semesterFee - scholarship;

    printf("\n---- Scholarship Calculation ----");
    printf("\nTotal Marks (3 subjects) = %.2f", total3);
    printf("\nPercentage                = %.2f%%", per3);
    printf("\nScholarship Amount        = Rs. %.2f", scholarship);
    printf("\nNet Payable Fee           = Rs. %.2f\n", netAmount);

    // ---------- PART 2: GRADING ----------
    float m1, m2, m3, m4, m5, total5, per5;

    printf("\nEnter marks in 5 subjects (out of 100 each): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total5 = m1 + m2 + m3 + m4 + m5;
    per5 = (total5 / 500) * 100;  // percentage for 5 subjects

    printf("\n---- Grade Calculation ----");
    printf("\nTotal Marks (5 subjects) = %.2f", total5);
    printf("\nPercentage               = %.2f%%", per5);

    // Grade system
    if (per5 >= 85) {
        printf("\nGrade = A\n");
    } else if (per5 >= 70) {
        printf("\nGrade = B\n");
    } else if (per5 >= 50) {
        printf("\nGrade = C\n");
    } else if (per5 >= 40) {
        printf("\nGrade = D\n");
    } else {
        printf("\nGrade = F (Fail)\n");
    }

    return 0;
}
