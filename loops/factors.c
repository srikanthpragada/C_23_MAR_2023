// Print factors of a number
// Date : 06-APR-2023

#include <stdio.h>

void main()
{
 int num = 233, i;

     for(i = 2; i <= num/ 2; i ++)
     {
         if(num % i == 0)
            printf("%d ", i);
     }
}
