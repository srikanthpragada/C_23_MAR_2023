// Pass by value
// Date : 20-APR-2023

#include <stdio.h>

void zero(int a, int b)
{
    a = 0;
    b = 0;
}


void main()
{
  int x = 10, y = 20;

      zero(x, y);
      printf("%d %d", x, y);
}
