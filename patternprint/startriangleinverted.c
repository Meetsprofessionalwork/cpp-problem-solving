// print the following pattern
// * * * *
// * * *
// * *
// *

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number N: ");
    scanf("%d", &n);
    // stars in the first row will be n and then in the second row it will be n-1 and then in the third row it will be n-2 and so on until we reach 1 star in the last row.
     // i is int type variable and it is used to control the number of rows in the pattern. The loop will run from n to 1, which means it will execute n times, creating n rows in the output.
        
    for (int i = n; i >= 1; i--) {
        for (int j=1; j <= i; j++) { // this loop will control the number of stars in each row. It will run from 1 to i, which means it will print i stars in the current row.
            printf("* ");// har star ke baad space dena hai taki pattern sahi se print ho
        }
        printf("\n"); // har line ke baad new line dena hai taki pattern sahi se print ho
        }
        return 0;
    }