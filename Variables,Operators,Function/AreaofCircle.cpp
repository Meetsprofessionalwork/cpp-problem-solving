//Calculating Area of a Circle
#include <stdio.h>
int main() {
    float radius = 5.0; // `radius` variable ko `float` type se declare kiya gaya hai aur usme value 5.0 assign ki gayi hai.
    float pi = 3.14159; // `pi` variable ko `float` type se declare kiya gaya hai aur usme value 3.14159 assign ki gayi hai.

    // Area of a circle formula: A = πr^2
    // `area` variable me circle ka area calculate karke store kiya gaya hai.
    float area = pi * radius * radius; 
    // `%f` format specifier ka use karke `area` variable ki value print ki gayi hai, aur `%.2f` ka use karke output ko 2 decimal places tak limit kiya gaya hai.
    printf("Area of the circle: %.2f\n", area); 

    return 0;
}