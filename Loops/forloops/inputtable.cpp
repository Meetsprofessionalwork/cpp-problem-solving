// Print the table of ‘n’. Take ‘n’ input from user
#include <stdio.h>
int main() {
    int n; // Variable to store the number for which we want to print the table
    printf("Enter a number to print its table: ");
    scanf("%d", &n); // Take input from the user

    printf("Table of %d:\n", n);
    for (int i = 1; i <= 10; i++) { // Loop from 1 to 10
        printf("%d x %d = %d\n", n, i, n * i); // Print the multiplication result
    }
    return 0;
}