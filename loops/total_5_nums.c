// Print total of 5 numbers
// Date : 06-APR-2023

#include <stdio.h>

void main()
{
 int i, num, total = 0;

     for(i = 1; i <= 5; i ++)
     {
         printf("Enter a number :");
         scanf("%d",&num);
         total += num;
     }

     printf("Total = %d, Average = %d", total, total / 5);
}
