//Basic program in C
#include<stdio.h>
int main(){
printf("Hello BUDDY");


//How to move in next line?
//we can use \n to move in next line
printf("\nThis is in the next line");


// space is also used to move in next line
// we can also use \t to move in next line
printf("\tThis is indented");



// we can space before and after the text
printf(" This has leading space");
printf("This has trailing space ");

// to print  without space we can use \b to move back the cursor
printf("\bThis has no leading space");

return 0;
}