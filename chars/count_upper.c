// Take 5 chars and count uppercase letters
// Date : 11-APR-2023

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
 char ch, i, count = 0;

    printf("Enter chars :");

    for(i = 1; i <= 5; i ++)
    {
       ch = getche();
       if(isupper(ch))
          count ++;
    }

    printf("\nCount = %d", count);
}
