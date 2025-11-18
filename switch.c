//wap to print the colour name against the first letter enter by using switch case
#include <stdio.h>                              




int main() {
    char color;

    printf("Enter the first letter of a color (R/G/B/Y): ");
    scanf(" %c", &color);

    switch (color) {
        case 'R':
        case 'r':
            printf("Red\n");
            break;
        case 'G':
        case 'g':
            printf("Green\n");
            break;
        case 'B':
        case 'b':
            printf("Blue\n");
            break;
        case 'Y':
        case 'y':
            printf("Yellow\n");
            break;
        default:
            printf("Invalid color\n");
    }

    return 0;
}
