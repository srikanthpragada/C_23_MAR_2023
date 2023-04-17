// Function to return absolute value
// Date : 17-APR-2023

#include <stdio.h>

int iseven(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int abs(int n)
{
  if(n < 0)
     n = -n;

  return n;
}

void main()
{
  printf("%d %d", abs(10), abs(-20));
}
