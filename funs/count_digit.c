// Function to return count of digits
// Date : 18-APR-2023

#include <stdio.h>
int count_digits(char s[30])
{
int i,count = 0;

     for(i = 0; s[i] != '\0'; i ++)
     {
         if (isdigit(s[i]))
            count ++;
     }

     return count;
}


void main()
{
   printf("Count of digits = %d", count_digits("123abc34"));
}
