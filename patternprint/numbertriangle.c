//print the following pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

// HERE now we are using the same loop and the same variable n for both row and column because we want to print the same number of rows as well as the same number of stars in each row as well.
// at the place of star we are printing the value of j because we want to print the numbers in the pattern instead of stars.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number N:");
    scanf("%d", &n);
    // i is int type variable and it is used to control the number of rows in the pattern. The loop will run from 1 to n, which means it will execute n times, creating n rows in the output.
    for (int i = 1; i <= n; i++) {
        for (int j=1; j <= i; j++) { // this loop will control the number of numbers in each row. It will run from 1 to i, which means it will print i numbers in the current row.
            printf("%d ", j); // har number ke baad space dena hai taki pattern sahi se print ho
        }
        printf("\n"); // har line ke baad new line dena hai taki pattern sahi se print ho
        }
        return 0;
    }