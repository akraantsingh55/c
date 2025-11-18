//wap to check number is even or odd if number is even then multiply it by 2 else multiply by 5
#include<stdio.h>
int main()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num%2==0)
    {
        result = num * 2;
        printf("The number is even. After multiplying by 2 the result is %d.", result);
    }
    else
    {
        result = num * 5;
        printf("The number is odd. After multiplying by 5 the result is %d.", result);
    }
    return 0;
}