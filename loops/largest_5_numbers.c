// Print largest of 5 numbers
// Date : 07-APR-2023

#include <stdio.h>

void main()
{
 int num, largest, i;

     largest = 0;

     for(i = 1; i <= 5; i ++)
     {
         printf("Enter number :");
         scanf("%d",&num);
         if (num > largest)
             largest = num;
     }

     printf("Largest = %d", largest);
}
