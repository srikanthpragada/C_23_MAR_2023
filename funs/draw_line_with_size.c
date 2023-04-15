// Draw a line with the given size
// Date : 15-APR-2023

#include <stdio.h>

void line(int size)
{
 int i;

     for(i = 1; i <= size; i ++)
     {
        putch('*');
     }
}

void main()
{
     line(30);
     printf("\nSrikanth Technologies\n");
     line(40);
}
