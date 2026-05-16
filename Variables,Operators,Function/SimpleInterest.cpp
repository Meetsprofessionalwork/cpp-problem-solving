// Calculating Simple Interest
#include <stdio.h>
int main() {
    float principal = 1000.0; // `principal` variable ko `float` type se declare kiya gaya hai aur usme value 1000.0 assign ki gayi hai.
    float rate = 5.0; // `rate` variable ko `float` type se declare kiya gaya hai aur usme value 5.0 assign ki gayi hai.
    int time = 3; // `time` variable ko `int` type se declare kiya gaya hai aur usme value 3 assign ki gayi hai.

    // Simple Interest formula: SI = (P * R * T) / 100
    // `simpleInterest` variable me simple interest calculate karke store kiya gaya hai.
    float simpleInterest = (principal * rate * time) / 100; 
    // `%f` format specifier ka use karke `simpleInterest` variable
    // ki value print ki gayi hai, aur `%.2f` ka use karke output ko 2 decimal places tak limit kiya gaya hai.
    printf("Simple Interest: %.2f\n", simpleInterest);
    return 0;
}