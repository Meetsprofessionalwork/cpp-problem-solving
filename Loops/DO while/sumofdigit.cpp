// Program to print sum of digits of a given number
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        sum += n % 10; // Add the last digit to sum
        n /= 10; // Remove the last digit
    } while (n != 0); // Continue until all digits are processed
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}