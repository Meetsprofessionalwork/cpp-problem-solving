
// // now for both row and column we are using the same loop and the same variable n because we want to print the same number of stars in each row and the same number of rows as well.

#include <stdio.h>
int main() {
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    for (int i = 1; i <= rows; i++) {  // for row we are using the variable rows because we want to print the same number of rows as well as the same number of stars in each row as well.
        for (int j=1; j <= columns; j++) { // for column we are using the variable columns because we want to print the same number of stars in each row as well as the same number of rows as well.
            printf("* ");// har star ke baad space dena hai taki pattern sahi se print ho
        }
        printf("\n");/// har line ke baad new line dena hai taki pattern sahi se print ho
        }
        return 0;
    }



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// // C program to print a solid rectangle pattern
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number N: ");
//     scanf("%d", &n);
//    //********..... upto n no of the stars  */
//     for (int i = 1; i <= n; i++) {
//         for (int j=1; j <= n; j++) {
//             printf("* ");
//         }
//         printf("\n");
//         }
//         return 0;
//     }
    
