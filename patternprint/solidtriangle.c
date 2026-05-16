// print the given pattern of stars in the form of triangle
// *
// * *
// * * *
// * * * *

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) { // i is int type variable and it is used to control the number of rows in the pattern. The loop will run from 1 to n, which means it will execute n times, creating n rows in the output.
        // at the place of n we are using i because we want to print the same number of stars in each row as the row number. For example, in the first row we want to print 1 star, in the second row we want to print 2 stars, and so on. So, we are using i to control the number of stars printed in each row.
        for (int j=1; j <= i; j++) {  
            printf("* ");// har star ke baad space dena hai taki pattern sahi se print ho
        }
        printf("\n");/// har line ke baad new line dena hai taki pattern sahi se print ho
        }

    return 0;
}