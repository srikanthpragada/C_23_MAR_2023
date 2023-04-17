// Function return total of an array
// Date : 17-APR-2023

#include <stdio.h>

int total(int a[5])
{
 int i, sum = 0;

    for(i = 0; i < 5; i ++)
    {
         sum += a[i];
    }
    return sum;
}

float average(int a[5])
{
   return total(a) / 5.0;
}


void main()
{
  int arr[] = {10,20,35,40,43};

      printf("Sum = %d, Avg  = %f", total(arr), average(arr));
}
