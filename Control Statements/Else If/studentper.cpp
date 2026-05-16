// // Take input percentage of a student and print the Grade according to marks:
// 1) 90-100 Excellent
// 2) 80-90 Very Good
// 3) 70-80 Good
// 4) 60-70 Can do better
// 5) 50-60 Average
// 6) 40-50 Below Average
// 7) <40 Fail


#include <stdio.h>
int main() {
    float percentage;
    printf("Enter the percentage of the student: ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: Excellent\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade: Very Good\n");
    } else if (percentage >= 70 && percentage < 80) {
        printf("Grade: Good\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Grade: Can do better\n");
    } else if (percentage >= 50 && percentage < 60) {
        printf("Grade: Average\n");
    } else if (percentage >= 40 && percentage < 50) {
        printf("Grade: Below Average\n");
    } else if (percentage < 40) {
        printf("Grade: Fail\n");
    } else {
        printf("Invalid percentage entered.\n");
    }

    return 0;
}