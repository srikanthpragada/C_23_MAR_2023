// Take 5 elements array
// Date : 11-APR-2023

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
 int prices[5], i;

    for(i = 0; i < 5; i ++)
    {
       printf("Enter price :");
       scanf("%d", &prices[i]);
    }

    for(i = 0; i < 5; i ++)
         printf("%d ", prices[i]);
}
