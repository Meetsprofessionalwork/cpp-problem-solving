// Arithmetic operations on int data type
// Arithmetic operations are basic mathematical operations that can be performed on variables of int data type. These operations include addition, subtraction, multiplication, division, and modulus.

#include <stdio.h>
int main() {
    int a = 10; // `a` variable ko `int` type se declare kiya gaya hai aur usme value 10 assign ki gayi hai.
    int b = 5; // `b` variable ko `int` type se declare kiya gaya hai aur usme value 5 assign ki gayi hai.

    // Addition
    int sum = a + b; // `sum` variable me `a` aur `b` ka addition store kiya gaya hai.
    printf("Sum: %d\n", sum); // `%d` format specifier ka use karke `sum` variable ki value print ki gayi hai.

    // Subtraction
    int difference = a - b; // `difference` variable me `a` aur `b` ka subtraction store kiya gaya hai.
    printf("Difference: %d\n", difference); // `%d` format specifier ka use karke `difference` variable
    // ki value print ki gayi hai.

    // Multiplication
    int product = a * b; // `product` variable me `a` aur `b` ka multiplication store kiya gaya hai.
    printf("Product: %d\n", product); // `%d` format specifier ka use karke `product` variable
    // ki value print ki gayi hai.

    // Division
    int quotient = a / b; // `quotient` variable me `a` aur `b` ka division store kiya gaya hai.
    // printf("Quotient: %d\n", quotient); // `%d` format specifier ka use karke `quotient` variable
    // ki value print ki gayi hai.

    //the answer of division is 2 but it will print 2 only because both `a` and `b` are of int type. If we want to get the exact answer of division, we can use float data type for `a` and `b`.
    // float quotient = (float)a / (float)b; // `quotient` variable me `a` aur `b` ka division store kiya gaya hai.
    printf("Quotient: %f\n", quotient); // `%f` format specifier ka use karke `quotient` variable ki value print ki gayi hai.

    // Modulus MOST IMPORTANT
    // Modulus operator `%` ka use karke hum `a` aur `b` ka remainder nikal sakte hain. Modulus operator do numbers ke division ke baad bacha hua remainder return karta hai.
    // For example, agar `a` 10 hai aur `b` 3 hai, to `a % b` ka result 1 hoga, kyunki 10 ko 3 se divide karne par quotient 3 hota hai aur remainder 1 hota hai.
    int remainder = a % b; // `remainder` variable me `a` aur `b` ka modulus store kiya gaya hai.
    printf("Remainder: %d\n", remainder); // `%d` format specifier ka use karke `remainder` variable
    // ki value print ki gayi hai.

    return 0;
}