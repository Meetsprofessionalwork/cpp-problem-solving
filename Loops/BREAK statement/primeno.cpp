// Program to find out if given number is prime or not
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("%d is not a prime number.\n", n);
            break; // Exit the loop if a divisor is found
        }
    }
    if (i == n) { // If no divisors were found, i will be equal to n
        printf("%d is a prime number.\n", n);
    }
    return 0;
}