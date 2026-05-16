//Print all odd numbers from 1 to 100 using CONTINUE

#include <stdio.h>
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        printf("%d ", i);
    }
    return 0;
}