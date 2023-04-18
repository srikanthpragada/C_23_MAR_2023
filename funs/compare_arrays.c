// Function to return whether two arrays are equal
// Date : 18-APR-2023

#include <stdio.h>
int equal(int f[5], int s[5])
{
int i;

     for(i = 0; i < 5; i ++)
     {
         if (f[i] != s[i])
            return 0; // false
     }

     return 1; // true
}


void main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,4,5};

   printf("Result = %d", equal(a,b));
}
