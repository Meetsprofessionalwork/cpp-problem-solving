// Print the factorials of first ‘n’ numbers
#include <stdio.h>
int main() {
    int n, factorial = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int i = 1; 
    do {
        factorial *= i; 
        printf("Factorial of %d is: %d\n", i, factorial);
        i++; 
    } while (i <= n); 
    return 0;
}