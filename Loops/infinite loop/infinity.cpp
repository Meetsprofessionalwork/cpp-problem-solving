// example of an infinite loop in C++
#include <stdio.h>
int main() {
    while (1) { // This condition is always true, creating an infinite loop
        printf("This is an infinite loop. Press Ctrl+C to stop it.\n");
    }
    return 0; // This line will never be reached
}