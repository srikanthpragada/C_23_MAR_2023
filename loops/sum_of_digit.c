// Take 5 numbers and get sum of all digits
// Date : 10-APR-2023

#include <stdio.h>

void main()
{
 int i,n, sum = 0;

     for(i = 1; i <= 5; i ++)
     {
          printf("Enter a number :");
          scanf("%d",&n);

          while(n > 0)
          {
              sum += n % 10;
              n /= 10;
          }
     }

     printf("Sum = %d", sum);
}
