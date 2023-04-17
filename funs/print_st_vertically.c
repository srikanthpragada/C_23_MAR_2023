// Function to print a string vertically
// Date : 17-APR-2023

#include <stdio.h>

void print(char s[30])
{
 int i;
    for(i = 0; s[i] != '\0'; i ++)
    {
        printf("%c\n", s[i]);
    }
}

void main()
{
  char st[30];

      strcpy(st,"Hello");
      print(st);
}
