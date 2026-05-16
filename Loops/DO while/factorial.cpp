// Print the factorial of given number
#include <stdio.h>
int main() {
    int n, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int i = 1; 
    do {
        factorial *= i; 
        i++; 
    } while (i <= n); 
    printf("The factorial of %d is: %d\n", n, factorial);
    return 0;
}