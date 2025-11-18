//wap to swap 2 numbers
#include <stdio.h>
void swap(int x , int y) {
    int temp;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping: x = %d, y = %d\n", x, y);
}
int main(){
    int a, b;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    swap(a, b);
    return 0;
}