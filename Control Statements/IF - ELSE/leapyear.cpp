// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs afte every 4 years)
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // `year` variable me user se input liya gaya hai. `if` statement ka use karke check kiya gaya hai ki `year` leap year hai ya nahi. Agar `year` ko 4 se divide karne par remainder 0 aata hai, to `year` leap year hai, warna nahi hai.
    if (year % 4 == 0) {
        printf("%d is a leap year.\n", year); // `%d` format specifier ka use karke `year` variable
        // ki value print ki gayi hai, aur message diya gaya hai ki `year` leap year hai.
    } else {
        printf("%d is not a leap year.\n", year); // `%d` format specifier ka use karke `year` variable
        // ki value print ki gayi hai, aur message diya gaya hai ki `year` leap year nahi hai.
    }

    return 0;
}