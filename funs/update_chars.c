// Pass an array
// Date : 20-APR-2023

#include <stdio.h>

void update_char(char st[], char source, char target)
{
 int i;

     for(i = 0; st[i] != '\0'; i ++)
          if(st[i] == source)
               st[i] = target;

}


void main()
{
   char st[20];

   update_char(st, ',', '-');
   puts(st);

}
