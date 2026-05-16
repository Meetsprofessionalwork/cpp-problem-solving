//Let us focus on int data type as of now.
// `int` C++ ka ek data type hai jo whole numbers (integer values) store karne ke liye use hota hai. Yeh usually 4 bytes memory leta hai aur `-2,147,483,648` se `2,147,483,647` tak ki values store kar sakta hai.

// 1) Variables as containers :

// Variables are like containers that hold data. They have a name and a type, and they can store values that can be used and modified throughout the program. For example, if we want to store a person's age, we can create a variable called `age` of type `int` and assign it a value.

// Variables containers ki tarah hote hain jo data ko store karte hain.
// Inka ek name aur type hota hai, aur yeh values ko store karte hain
// jise program ke andar use aur change kiya ja sakta hai.
// Example ke liye, agar hume kisi person ki age store karni ho,
// to hum `age` naam ka variable bana sakte hain jiska type `int` hoga
// aur usme ek value assign kar sakte hain.




// # include <stdio.h>
// int main() {
//     int age = 25; // `age` variable ko `int` type se declare kiya gaya hai aur usme
//     // value 25 assign ki gayi hai.
//     printf("Age: %d\n", age); // `%d` format specifier ka use karke `age` variable
//     // ki value print ki gayi hai.
//     return 0;
// }






// 2) Variable declaration and initialization:
// Printing Variables in C & Updation of Variables
// Variable declaration ka matlab hai ki hum program ke andar ek variable ka naam aur type define karte hain. Initialization ka matlab hai ki hum variable ko ek initial value assign karte hain. Hum variable ko declare aur initialize dono ek saath bhi kar sakte hain, jaise ki `int age = 25;` mein kiya gaya hai.

#include <stdio.h>
int main() {
    int age; // Variable declaration: `age` variable declare kiya gaya hai.
    age = 25; // Variable initialization: `age` variable 
    // ko value 25 assign ki gayi hai.
    printf("Age: %d\n", age); // `age` variable ki value print ki gayi hai.    
    return 0;
}
