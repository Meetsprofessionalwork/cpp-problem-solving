// Take integer input and print the absolute value of that integer
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // `absoluteValue` variable me `num` ka absolute value store kiya gaya hai. Agar `num` negative hai, to uska absolute value uske negative sign ko hata kar positive ban jayega, aur agar `num` non-negative hai, to uska absolute value wahi rahega.
    int absoluteValue = (num < 0) ? -num : num; 

    // `%d` format specifier ka use karke `num` aur `absoluteValue` variable ki value print ki gayi hai.
    printf("Absolute value of %d is %d\n", num, absoluteValue); 
    return 0;
}