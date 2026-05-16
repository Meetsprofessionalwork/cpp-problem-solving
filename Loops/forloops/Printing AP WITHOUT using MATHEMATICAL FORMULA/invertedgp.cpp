//  Print the GP - 100,50,25.. upto ‘n’ terms
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int term = 100; // First term of the GP
    for (int i = 1; i <= n && term > 0; i++) {
        printf("%d ", term);
        term /= 2; // Divide the term by 2 to get the next term
    }
    return 0;
}