// If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three. nested if else statement ka use karke is problem ko solve kiya gaya hai. Sabse pehle `youngest` variable me Ram ki age store ki gayi hai. Phir check kiya gaya hai ki Shyam ki age Ram se chhoti hai ya nahi, agar hai to `youngest` variable me Shyam ki age store kar di gayi hai. Uske baad check kiya gaya hai ki Ajay ki age current youngest se chhoti hai ya nahi, agar hai to `youngest` variable me Ajay ki age store kar di gayi hai. Finally, `youngest` variable me sabse chhoti age store ho jayegi, jise print kar diya gaya hai.

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