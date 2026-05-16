// Post / Pre - Increment / Decrement operators
#include <stdio.h>
int main() {
    int a = 5, b = 5;
    printf("Post-increment: a++ = %d\n", a++); // Prints 5, then a becomes 6
    printf("Pre-increment: ++b = %d\n", ++b); // b becomes 6, then prints 6
    printf("Current value of a: %d\n", a); // Prints 6
    printf("Current value of b: %d\n", b); // Prints 6
    return 0;
}