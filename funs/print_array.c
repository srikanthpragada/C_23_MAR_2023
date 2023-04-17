// Function to print an array
// Date : 17-APR-2023

#include <stdio.h>

void print(int a[5])
{
 int i;
    for(i = 0; i < 5; i ++)
    {
        printf("%d ", a[i]);
    }
}

void main()
{
  int arr[] = {10,20,30,40,50};

      print(arr);
}
