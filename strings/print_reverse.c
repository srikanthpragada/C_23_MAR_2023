// Take name and print it in reverse
// Date : 15-APR-2023

#include <stdio.h>


void main()
{
 char name[30];
 int i;

     printf("Enter your name :");
     gets(name);

     for(i = strlen(name) - 1; i >= 0 ; i --)
        putch(name[i]);


}
