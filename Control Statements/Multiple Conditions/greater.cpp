// Take 3 positive integers input and print the greatest of them.
#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three positive integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // `max` variable me `num1`, `num2`, aur `num3` me se sabse bada number store kiya gaya hai. `if` statement ka use karke check kiya gaya hai ki `num1` sabse bada hai ya nahi, agar hai to `max` me `num1` store kiya gaya hai. Agar `num2` sabse bada hai to `max` me `num2` store kiya gaya hai, aur agar `num3` sabse bada hai to `max` me `num3` store kiya gaya hai.
    int max = num1; 
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // `%d` format specifier ka use karke `max` variable ki value print ki gayi hai, aur message diya gaya hai ki ye greatest number hai.
    printf("The greatest number is: %d\n", max); 
    return 0;
}