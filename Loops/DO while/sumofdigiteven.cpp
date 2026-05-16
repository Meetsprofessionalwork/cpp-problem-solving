// Program to print sum of given number and its reverse
#include <stdio.h>
int main() {
    int n, sum = 0, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original = n; // Store the original number for later use
    do {
        int digit = n % 10; // Get the last digit
        sum += digit; // Add the digit to sum
        reverse = reverse * 10 + digit; // Append the digit to reverse
        n /= 10; // Remove the last digit
    } while (n != 0); // Continue until all digits are processed
    sum += reverse; // Add the reverse to the sum
    printf("The sum of the number and its reverse is: %d\n", sum);
    return 0;
}