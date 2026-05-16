//Take positive integer input and tell if it is divisible by 5 or not.

#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // `num` variable me user se input liya gaya hai. `if` statement ka use karke check kiya gaya hai ki `num` 5 se divisible hai ya nahi. Agar `num` ko 5 se divide karne par remainder 0 aata hai, to `num` 5 se divisible hai, warna nahi hai.
    if (num % 5 == 0) {
        printf("%d is divisible by 5.\n", num); // `%d` format specifier ka use karke `num` variable
        // ki value print ki gayi hai, aur message diya gaya hai ki `num` 5 se divisible hai.
        
    } else {
        printf("%d is not divisible by 5.\n", num); // `%d` format specifier ka use karke `num` variable
        // ki value print ki gayi hai, aur message diya gaya hai ki `num` 5 se divisible nahi hai.
    }

    return 0;
}