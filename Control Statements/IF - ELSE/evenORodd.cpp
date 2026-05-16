// Take positive integer input and tell if it is even or odd
#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // `num` variable me user se input liya gaya hai. `if` statement ka use karke check kiya gaya hai ki `num` even hai ya odd. Agar `num` ko 2 se divide karne par remainder 0 aata hai, to `num` even hai, warna odd hai.
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num); // `%d` format specifier ka use karke `num` variable

        // ki value print ki gayi hai, aur message diya gaya hai ki `num` even number hai.
    } else {
        printf("%d is an odd number.\n", num); // `%d` format specifier ka use karke `num` variable ki value print ki gayi hai, aur message diya gaya hai ki `num` odd number hai.
    }

    return 0;
}