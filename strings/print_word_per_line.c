// Take string and print each word on separate line
// Date : 15-APR-2023

#include <stdio.h>

void main()
{
 char st[80];
 int i;

     printf("Enter string :");
     gets(st);

     for(i = 0; st[i] != '\0' ; i ++)
     {
         if(isspace(st[i]))
            putch('\n');
         else
            putch(st[i]);
     }


}
