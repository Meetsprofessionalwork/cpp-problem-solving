// print the pattern of the numbers in the form of square
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) { // i is int type variable and it is used to control the number of rows in the pattern. The loop will run from 1 to n, which means it will execute n times, creating n rows in the output.
        for (int j=1; j <= n; j++) { // number columns in the pattern. using another valu--> J
            printf("%d ", j); // har number ke baad space dena hai taki pattern sahi se print ho
        }
        printf("\n"); // har line ke baad new line dena hai taki pattern sahi se print ho
        }

    return 0;
}