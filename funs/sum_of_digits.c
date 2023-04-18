// Function to return sum of digits
// Date : 18-APR-2023

#include <stdio.h>
int sum_of_digits(int n)
{
int sum = 0;

     while(n > 0) {
        sum += n % 10;
        n /= 10;
     }

     return sum;
}


void main()
{
   printf("Sum of digits = %d", sum_of_digits(1234));
}
