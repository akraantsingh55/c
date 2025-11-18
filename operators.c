#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Addition
    printf("Addition (a + b) = %d\n", a + b);

    // Subtraction
    printf("Subtraction (a - b) = %d\n", a - b);

    // Multiplication
    printf("Multiplication (a * b) = %d\n", a * b);

    // Division
    if (b != 0) {
        printf("Division (a / b) = %d\n", a / b);
        printf("Remainder (a %% b) = %d\n", a % b);  // %% is used to print %
    } else {
        printf("Division and remainder not possible (b = 0)\n");
    }

    return 0;
}
