// Draw a line with the given size and char
// Date : 15-APR-2023

#include <stdio.h>

void line(int size, char ch)
{
 int i;

     for(i = 1; i <= size; i ++)
     {
        putch(ch);
     }
}

void main()
{
     line(30,'-');
     printf("\nSrikanth Technologies\n");
     line(40,'*');
}
