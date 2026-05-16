// Take float input and print the fractional part of the real number.
#include <stdio.h>
int main() {
    float num;
    printf("Enter a real number: ");
    scanf("%f", &num);

    // `fractionalPart` variable me `num` ka fractional part store kiya gaya hai. `(int)num` se `num` ka integer part nikal kar usse `num` me se subtract kiya gaya hai, jisse fractional part milta hai.
    float fractionalPart = num - (int)num; 

    // `%f` format specifier ka use karke `num` aur `fractionalPart` variable ki value print ki gayi hai, aur `%.2f` ka use karke output ko 2 decimal places tak limit kiya gaya hai.
    printf("Fractional part of %.2f is %.2f\n", num, fractionalPart); 
    
    
    return 0;
}