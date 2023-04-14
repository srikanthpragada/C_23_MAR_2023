// Take name and print how many uppercase letters are there
// Date : 14-APR-2023

#include <stdio.h>

void main()
{
 char name[30];
 int i, count = 0;

     printf("Enter your name :");
     gets(name);

     for(i = 0; name[i] != '\0'; i ++)
     {
         if (isupper(name[i]))
               count ++;
     }
     printf("Count  = %d", count);

}
