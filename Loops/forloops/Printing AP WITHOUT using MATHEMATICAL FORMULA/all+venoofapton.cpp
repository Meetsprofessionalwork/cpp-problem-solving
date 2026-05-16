//Print the AP - 100,97,94.. upto all terms which are positive

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int term = 100; // First term of the AP
    for (int i = 1; i <= n && term > 0; i++) {
        printf("%d ", term);
        term -= 3; // Subtract 3 from the term to get the next term
    }
    return 0;
}