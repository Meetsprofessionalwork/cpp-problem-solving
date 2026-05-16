// Print the first ‘n’ fibonacci numbers
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The first %d terms in the Fibonacci series are: ", n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
            continue;
        } else if (i == 2) {
            printf("%d ", b);
            continue;
        }
        next = a + b; 
        a = b; 
        b = next; 
        printf("%d ", next);
    }
    return 0;
}