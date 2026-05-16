// : If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.

#include <stdio.h>
int main() {
    int ageRam, ageShyam, ageAjay;
    printf("Enter the ages of Ram, Shyam and Ajay: ");
    scanf("%d %d %d", &ageRam, &ageShyam, &ageAjay);

    int youngest = ageRam; // Initially assume Ram is the youngest
    if (ageShyam < youngest) {
        youngest = ageShyam; // Update youngest if Shyam is younger than Ram
    }
    if (ageAjay < youngest) {
        youngest = ageAjay; // Update youngest if Ajay is younger than the current youngest
    }

    printf("The youngest age is: %d\n", youngest); // Print the youngest age
    return 0;
}