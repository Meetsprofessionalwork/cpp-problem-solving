// QUetion using operator in do while loop
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int i = 1; // Initialize the counter variable
    do {
        sum += i; // Add the current value of i to sum
        i++; // Increment the counter variable
    } while (i <= n); // Loop condition
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}