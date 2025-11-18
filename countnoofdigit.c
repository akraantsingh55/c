//wap to count the number of digits in a given number using loop and without using loop
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Counting digits using loop
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    printf("Number of digits (using loop): %d\n", count);

    // Counting digits without using loop
    count = 0;
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }
    printf("Number of digits (without using loop): %d\n", count);

    return 0;
}
