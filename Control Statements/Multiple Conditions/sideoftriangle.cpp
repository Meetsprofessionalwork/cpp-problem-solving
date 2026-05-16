// Take 3 numbers input and tell if they can be the sides of a triangle.

#include <stdio.h>
int main() {
    float side1, side2, side3;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // `isTriangle` variable me check kiya gaya hai ki `side1`, `side2`, aur `side3` triangle ke sides ho sakte hain ya nahi. Triangle banne ke liye, kisi bhi do sides ka sum teesre side se bada hona chahiye. Is condition ko check karne ke liye `&&` operator ka use kiya gaya hai.
    int isTriangle = (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1); 

    if (isTriangle) {
        printf("The sides can form a triangle.\n"); // Agar `isTriangle` true hai, to message print kiya jayega ki sides triangle bana sakte hain.
    } else {
        printf("The sides cannot form a triangle.\n"); // Agar `isTriangle` false hai, to message print kiya jayega ki sides triangle nahi bana sakte hain.
    }

    return 0;
}