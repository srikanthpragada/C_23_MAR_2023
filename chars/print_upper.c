// Take 5 chars and print uppercase letters
// Date : 11-APR-2023

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
 char ch, i;

    printf("Enter chars :");

    for(i = 1; i <= 5; i ++)
    {
       ch = getch();
       putch(toupper(ch));
    }
}
