// Function to print factors of the given number
// Date : 17-APR-2023

#include <stdio.h>

void factors(int n)
{
 int i;

     for(i = 2; i <= n/2; i ++)
     {
        if (n % i == 0)
              printf("%d\n", i);
     }
}

void main()
{
    factors(255);
    factors(3422);
}
