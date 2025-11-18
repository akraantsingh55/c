//wap to print half of the even number between given range
// #include <stdio.h>

// int main() {
//     int start, end;

//     printf("Enter the start and end of the range: ");
//     scanf("%d %d", &start, &end);

//     printf("Even numbers between %d and %d are:\n", start, end);
//     for (int i = start; i <= end; i++) {
//         if (i % 2 == 0) {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int spoint, epoint , even;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &spoint, &epoint);
    while(spoint!=epoint)
    {
        if(spoint%2==0)
        {
            even=spoint/2;
            printf("%d\n",even);
        }
        spoint++;
    }

   
    return 0;
}