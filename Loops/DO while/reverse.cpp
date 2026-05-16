// program to print reverse of a given number
#include <stdio.h>
int main() {
    int n, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        reverse = reverse * 10 + n % 10; // Append the last digit to reverse
        n /= 10; // Remove the last digit
    } while (n != 0); // Continue until all digits are processed
    printf("The reverse of the number is: %d\n", reverse);
    return 0;
}