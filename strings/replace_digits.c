// Take a string and replace digits with 0
// Date : 14-APR-2023

#include <stdio.h>

void main()
{
 char st[30];
 int i, count = 0;

     printf("Enter string :");
     gets(st);

     for(i = 0; st[i] != '\0'; i ++)
     {
         if (isdigit(st[i]))
               st[i] = '0';
     }
     puts(st);
}
