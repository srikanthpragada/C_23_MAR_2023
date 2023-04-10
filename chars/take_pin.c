// Accept a pin
// Date : 10-APR-2023

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
 char ch, i;

    printf("Enter PIN :");

    for(i = 1; i <= 4; i ++)
    {
       ch = getch();
       if(isdigit(ch))
          putch('*');
       else
       {
           printf("\nInvalid PIN. Char %c is not valid in pin", ch);
           break;
       }
    }
}
