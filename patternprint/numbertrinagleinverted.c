// print the following pattern
// 4 3 2 1
// 4 3 2
// 4 3
// 4

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number N: ");
    scanf("%d", &n);
    // stars in the first row will be n and then in the second row it will be n-1 and then in the third row it will be n-2 and so on until we reach 1 star in the last row.
     // i is int type variable and it is used to control the number of rows in the pattern. The loop will run from n to 1, which means it will execute n times, creating n rows in the output.
        
    for (int i = n; i >= 1; i--) {
        for (int j=n; j >= n-i+1; j--) { // this loop will control the number of numbers in each row. It will run from n to n-i+1, which means it will print i numbers in the current row.
            printf("%d ", j); // har number ke baad space dena hai taki pattern sahi se print ho
        }
        printf("\n"); // har line ke baad new line dena hai taki pattern sahi se print ho
        }
        return 0;
    }