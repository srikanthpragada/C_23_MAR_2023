// Take string and check whether it is palindrome
// Date : 15-APR-2023

#include <stdio.h>

void main()
{
 char st[80], st2[80];
 int i;

     printf("Enter string :");
     gets(st);

     strcpy(st2, st); // make a copy
     strrev(st2);     // reverse the copy

     if( strcmp(st, st2) == 0)
        printf("Palindrome");
     else
        printf("Not a Palindrome");

}
