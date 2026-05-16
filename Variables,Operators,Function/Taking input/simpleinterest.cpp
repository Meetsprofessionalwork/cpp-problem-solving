// Taking input
#include <stdio.h>
int main() {
    float principal, rate;
    int time;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%d", &time);

    float simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", simpleInterest);
    return 0;
}

