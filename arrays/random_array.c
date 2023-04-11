// Take 10 elements array and fill it with random numbers
// Date : 11-APR-2023

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
 int a[10], i;

    srand(time(0));  // init random seed

    for(i = 0; i < 10; i ++)
    {
       a[i] = rand() % 100;
       printf("%d ", a[i]);
    }

}
