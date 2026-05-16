// Print all even numbers from 1 to 100
#include <stdio.h>
int main() {
    for (int i = 1; i <= 100; i++) { // Loop from 1 to 100
        if (i % 2 == 0) { // Check if the number is even
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}