// Print the table of 19
#include <stdio.h>
int main() {
    int number = 19; // The number for which we want to print the table
    printf("Table of %d:\n", number);
    for (int i = 1; i <= 10; i++) { // Loop from 1 to 10
        printf("%d x %d = %d\n", number, i, number * i); // Print the multiplication result
    }
    return 0;
}