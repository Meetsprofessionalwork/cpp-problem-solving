//  : Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
#include <stdio.h>
int main() {
    float length, breadth;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    float area = length * breadth; // Area of rectangle formula: A = l * b
    float perimeter = 2 * (length + breadth); // Perimeter of rectangle formula: P = 2(l + b)

    if (area > perimeter) {
        printf("Area is greater than perimeter.\n");
    } else if (area < perimeter) {
        printf("Perimeter is greater than area.\n");
    } else {
        printf("Area and perimeter are equal.\n");
    }

    return 0;
}s