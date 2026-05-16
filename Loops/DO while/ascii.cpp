//  Print all alphabet and their corresponding ASCII values
#include <stdio.h>
int main() {
    char ch;
    printf("Character\tASCII Value\n");
    for (ch = 'A'; ch <= 'Z'; ch++) { 
        printf("%c\t\t%d\n", ch, ch); 
    }
    for (ch = 'a'; ch <= 'z'; ch++) { 
        printf("%c\t\t%d\n", ch, ch); 
    }
    return 0;
}