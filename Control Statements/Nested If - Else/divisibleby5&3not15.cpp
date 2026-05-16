//Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // `num` variable me user se input liya gaya hai. `if` statement ka use karke check kiya gaya hai ki `num` 5 ya 3 se divisible hai aur 15 se divisible nahi hai. Agar `num` ko 5 ya 3 se divide karne par remainder 0 aata hai aur 15 se divide karne par remainder 0 nahi aata hai, to `num` 5 ya 3 se divisible hai aur 15 se divisible nahi hai, warna nahi hai.
    if ((num % 5 == 0 || num % 3 == 0) && num % 15 != 0) {
        printf("%d is divisible by either 5 or 3 but not divisible by 15.\n", num); // `%d` format specifier ka use karke `num` variable
        // ki value print ki gayi hai, aur message diya gaya hai ki `num` 5 ya 3 se divisible hai aur 15 se divisible nahi hai.
    } else {
        printf("%d does not meet the criteria.\n", num); // `%d` format specifier ka use karke `num` variable
        // ki value print ki gayi hai, aur message diya gaya hai ki `num` criteria ko meet nahi karta.
    }

    return 0;
}