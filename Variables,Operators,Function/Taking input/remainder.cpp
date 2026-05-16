//Take two integers input, a and b : a>b, and find the remainder when a is divided by b.
#include <stdio.h>
int main() {
    int a, b, remainder;
    printf("Enter two integers (a > b): ");
    scanf("%d", &a);
    scanf("%d", &b);
    remainder = a % b; // `remainder` variable me `a` aur `b` ka modulus store kiya gaya hai.
    printf("Remainder when %d is divided by %d: %d\n", a, b, remainder); // `%d` format specifier ka use karke `remainder` variable
    // ki value print ki gayi hai.
    return 0;
}
//int q = a/ b; // `q` variable me `a` aur `b` ka division store kiya gaya hai. Agar `a` 10 hai aur `b` 3 hai, to `q` ka result 3 hoga, kyunki 10 ko 3 se divide karne par quotient 3 hota hai aur remainder 1 hota hai.
//Divisor * Quotient + Remainder = Dividend
//remainder = Dividend - Divisor * Quotient
//remainder = a - b * q; 
// `remainder` variable me `a` aur `b` ka modulus store kiya gaya hai. 
// Agar `a` 10 hai aur `b` 3 hai, to `remainder` ka result 1 hoga, kyunki 10 ko 3 se divide karne par quotient 3 hota hai aur remainder 1 hota hai.