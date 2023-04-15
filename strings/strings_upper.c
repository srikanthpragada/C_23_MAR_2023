// Take 5 strings and display them in uppercase
// Date : 15-APR-2023

#include <stdio.h>

void main()
{
 char st[5][20];
 int i;

     for(i = 0; i < 5; i ++)
     {
       printf("Enter string :");
       gets(st[i]);
     }

     for(i = 0; i < 5; i ++)
     {
         puts( strupr(st[i])) ;
     }

}
