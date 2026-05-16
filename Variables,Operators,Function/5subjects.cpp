//Calculating percentage of 5 subjects

#include <stdio.h>

int main() {
    float subject1 = 85.5;
    float subject2 = 92.0;
    float subject3 = 78.5;
    float subject4 = 96.0;
    float subject5 = 88.5;

    float total = subject1 + subject2 + subject3 + subject4 + subject5;
    float percentage = (total / 500) * 100;

    printf("Total marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}