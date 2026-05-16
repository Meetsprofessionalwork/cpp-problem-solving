// Increment - Decrement operators
// C++ language standard version: C++14
#include <stdio.h>
int main() {
    int a = 10; // `a` variable ko `int` type se declare kiya gaya hai aur usme value 10 assign ki gayi hai.
    int b = 5; // `b` variable ko `int` type se declare kiya gaya hai aur usme value 5 assign ki gayi hai.

    // Increment operator
    a++; // `a` variable ko increment kiya gaya hai, iska matlab hai ki `a` ki value 1 se badh jayegi. Ab `a` ki value 11 ho jayegi.
    printf("Value of a after increment: %d\n", a); // `%d` format specifier ka use karke `a` variable ki value print ki gayi hai.

    // Decrement operator
    b--; // `b` variable ko decrement kiya gaya hai, iska matlab hai ki `b` ki value 1 se kam ho jayegi. Ab `b` ki value 4 ho jayegi.
    printf("Value of b after decrement: %d\n", b); // `%d` format specifier ka use karke `b` variable

    // Pre-increment and pre-decrement operators
    ++a; // `a` variable ko pre-increment kiya gaya hai, iska matlab hai ki `a` ki value 1 se badh jayegi. Ab `a` ki value 12 ho jayegi.
    printf("Value of a after pre-increment: %d\n", a); // `%d` format specifier ka use karke `a` variable ki value print ki gayi hai.

    // Post-increment and post-decrement operators
    b++; // `b` variable ko post-increment kiya gaya hai, iska matlab hai ki `b` ki value 1 se badh jayegi. Ab `b` ki value 5 ho jayegi.
    printf("Value of b after post-increment: %d\n", b); // `%d` format specifier ka use karke `b` variable ki value print ki gayi hai.

    // Pre-decrement and post-decrement operators
    --a; // `a` variable ko pre-decrement kiya gaya hai, iska matlab hai ki `a` ki value 1 se kam ho jayegi. Ab `a` ki value 11 ho jayegi.
    printf("Value of a after pre-decrement: %d\n", a); // `%d` format specifier ka use karke `a` variable ki value print ki gayi hai.

    // Post-decrement and post-increment operators
    b--; // `b` variable ko post-decrement kiya gaya hai, iska matlab hai ki `b` ki value 1 se kam ho jayegi. Ab `b` ki value 4 ho jayegi.
    printf("Value of b after post-decrement: %d\n", b); // `%d` format specifier ka use karke `b` variable ki value print ki gayi hai.

    return 0;
}