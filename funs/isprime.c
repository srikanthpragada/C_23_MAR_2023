// Function to check prime number
// Date : 17-APR-2023

#include <stdio.h>
int isprime(int n)
{
int i;

   for(i = 2; i <= n/2; i ++)
   {
       if (n % i == 0)
          return 0;  // not a prime as a factor is found
   }

   return 1; // prime as no factor found
}


void main()
{
   if ( isprime(27))
      printf("Prime");
   else
      printf("Not a prime");
}
