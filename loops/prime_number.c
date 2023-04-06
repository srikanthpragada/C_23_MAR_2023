// Print factors of a number
// Date : 06-APR-2023

#include <stdio.h>

void main()
{
 int num = 23, i, prime = 1; // flag

     for(i = 2; i <= num/ 2; i ++)
     {
         if(num % i == 0)
         {
            prime = 0;  // false
            break;
         }
     }

     if(prime)  // if prime is non-zero
        printf("Prime Number!");
     else
        printf("Not a prime number!");

}
