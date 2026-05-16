// Hierarchy of operators
#include <stdio.h>
int main() {
    int a = 10, b = 5, c = 2;

    // Multiplication has higher precedence than addition, so `b * c` is evaluated first, resulting in `5 * 2 = 10`, and then `a + 10` is evaluated, giving the final result of `20`.
    int result = a + b * c;
    printf("Result: %d\n", result);
    return 0;
}



//// Operator precedence and associativity
// Operator precedence determines the order in which operators are evaluated in an expression. For example, in the expression `a + b * c`, the multiplication operator `*` has higher precedence than the addition operator `+`, so `b * c` is evaluated first, and then `a + (b * c)` is evaluated.
// Associativity determines the order in which operators of the same precedence are evaluated. For example, in the expression `a - b - c`, the subtraction operator `-` is left-associative, so it is evaluated from left to right, resulting in `(a - b) - c`.

// ITS FOLLOW BODMAS RULE
// BODMAS stands for Brackets, Orders (i.e., powers and square roots), Division and Multiplication (from left to right), Addition and Subtraction (from left to right). This rule helps in determining the order of operations in an expression. For example, in the expression `3 + 4 * 2 / (1 - 5)`, the operations are performed in the following order:
