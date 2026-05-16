// Take positive integer input and tell if it is a three digit number or not.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // `num` variable me user se input liya gaya hai. `if` statement ka use karke check kiya gaya hai ki `num` three digit number hai ya nahi. Agar `num` 100 se bada ya equal hai aur 999 se chhota ya equal hai, to `num` three digit number hai, warna nahi hai.
    if (num >= 100 && num <= 999) {
        printf("%d is a three digit number.\n", num); // `%d` format specifier ka use karke `num` variable
        // ki value print ki gayi hai, aur message diya gaya hai ki `num` three digit number hai.
    } else {
        printf("%d is not a three digit number.\n", num); // `%d` format specifier ka use karke `num` variable
        // ki value print ki gayi hai, aur message diya gaya hai ki `num` three digit number nahi hai.
    }

    return 0;
}