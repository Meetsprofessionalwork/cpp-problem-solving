// Print the nth fibonacci number
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter the term number: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("The %dth term in the Fibonacci series is: %d\n", n, a);
        return 0;
    } else if (n == 2) {
        printf("The %dth term in the Fibonacci series is: %d\n", n, b);
        return 0;
    }
    for (int i = 3; i <= n; i++) {
        next = a + b; 
        a = b; 
        b = next; 
    printf("The %dth term in the Fibonacci series is: %d\n", n, next);
    return 0;
}