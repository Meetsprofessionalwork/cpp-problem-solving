//Arithmetic operations on float data type

#include <stdio.h>
int main() {
    float a = 10.5; // `a` variable ko `float` type se declare kiya gaya hai aur usme value 10.5 assign ki gayi hai.
    float b = 5.2; // `b` variable ko `float` type se declare kiya gaya hai aur usme value 5.2 assign ki gayi hai.

    // Addition
    float sum = a + b; // `sum` variable me `a` aur `b` ka addition store kiya gaya hai.
    printf("Sum: %f\n", sum); // `%f` format specifier ka use karke `sum` variable ki value print ki gayi hai.

    // Subtraction
    float difference = a - b; // `difference` variable me `a` aur `b` ka subtraction store kiya gaya hai.
    printf("Difference: %f\n", difference); // `%f` format specifier ka use karke `difference` variable
    // ki value print ki gayi hai.

    // Multiplication
    float product = a * b; // `product` variable me `a` aur `b` ka multiplication store kiya gaya hai.
    printf("Product: %f\n", product); // `%f` format specifier ka use karke `product` variable
    // ki value print ki gayi hai.

    // Division
    float quotient = a / b; // `quotient` variable me `a` aur `b` ka division store kiya gaya hai.
    printf("Quotient: %f\n", quotient); // `%f` format specifier ka use karke `quotient` variable ki value print ki gayi hai.

    return 0;
}