//wap to check whether a number is armstrong or not
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    // Find the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Check if the number is an Armstrong number
    int sum = 0;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
