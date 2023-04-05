// Take a number and check whether it is divisible by 3 and 5
// Date : 05-apr-2023

#include <stdio.h>

void main()
{
 int num;

    printf("Enter number :");
    scanf("%d", &num);

    if(num % 3 == 0)
        if(num % 5 == 0)
            printf("Both");
        else
            printf("3");
    else
        if(num % 5 == 0)
           printf("5");
        else
           printf("None");

}
