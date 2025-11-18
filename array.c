#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
    int a[MAX_SIZE];
    int size, i;
    printf("Enter the value of elements you want to insert: ");
    if (scanf("%d", &size) ;
    if (size < 0 || size > MAX_SIZE) {
        printf("Invalid size\n");
        return 1;
    }
    printf("Enter the %d elements into array: ", size);
    for (i = 0; i < size; i++) {
        if (scanf("%d", &a[i]);
    }
    printf("The array elements are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}