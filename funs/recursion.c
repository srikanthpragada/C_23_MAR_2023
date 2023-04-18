// Recursion
// Date : 18-APR-2023

#include <stdio.h>


void print(int n)
{
   printf("%d ",n);
   if(n > 1)
      print(n - 1); // recursion
}

void main()
{
    print(5);
}

