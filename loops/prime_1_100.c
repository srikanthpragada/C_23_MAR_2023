// print prime numbers between 1 to 100
// Date : 07-APR-2023

#include <stdio.h>

void main()
{
 int i,j, prime;

     for(i = 3; i < 100; i += 2)
     {
         prime = 1;
         for(j = 2; j <= i/2; j ++)
         {
             if(i % j == 0)
             {
                prime = 0;
                break;
             }
         }
         if(prime)
            printf("%d ", i);
     }
}
