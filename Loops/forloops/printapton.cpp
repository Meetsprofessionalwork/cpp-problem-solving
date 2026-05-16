// Print the AP - 1,3,5,7,9.. upto ‘n’ terms
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n); // Read the number of terms from user input

    for (int i = 0; i < n; i++) { // Loop to print 'n' terms
        printf("%d ", 2 * i + 1); // Calculate and print the AP term
    }
    printf("\n");
    return 0;
}