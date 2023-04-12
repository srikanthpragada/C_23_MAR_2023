// Take 10 elements array and fill it with random numbers and reverse the array
// Date : 12-APR-2023

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
 int a[10], i, j, temp;

    srand(time(0));  // init random seed

    for(i = 0; i < 10; i ++)
    {
       a[i] = rand() % 100;
       printf("%d ", a[i]);
    }

    // interchange elements to reverse array
    for(i = 0, j = 9; i < 5; i ++, j --)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

     printf("\nArray after it is reversed!\n");

    for(i = 0; i < 10; i ++)
    {
       printf("%d ", a[i]);
    }

}
