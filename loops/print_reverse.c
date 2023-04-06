// Print a number in reverse
// Date : 06-APR-2023

#include <stdio.h>

void main()
{
 int num = 125;

     while(num > 0)
     {
       printf("%d", num % 10); // print rightmost digit
       num = num / 10;         // remove rightmost digit
     }
}
