// Program to count digits of a given number
#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        n /= 10; // Remove the last digit
        count++; // Increment the count of digits
    } while (n != 0); // Continue until all digits are removed
    printf("The number of digits is: %d\n", count);
    return 0;
}