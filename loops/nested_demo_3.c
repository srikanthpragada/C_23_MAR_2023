// Nested loop to print 1 to 5, 5 times
// Date : 07-APR-2023

#include <stdio.h>

void main()
{
 int i,j;

     for(i = 1; i <= 5; i ++)
     {
         for(j = 1; j <= 5; j ++)
         {
             printf("%d ", i);
         }
         printf("\n");
     }
}
