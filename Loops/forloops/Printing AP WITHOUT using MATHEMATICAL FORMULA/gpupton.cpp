// Print the GP - 1,2,4,8,16.. upto ‘n’ terms
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int term = 1; // First term of the GP
    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= 2; // Multiply the term by 2 to get the next term
    }
    return 0;
}