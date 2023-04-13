// Take 5X5 elements array and fill it with random numbers
// Date : 13-APR-2023

#include <stdio.h>


void main()
{
 int a[5][5], i, j;

    srand(time(0));  // init random seed

    for(i = 0; i < 5; i ++)
    {
       for(j = 0; j < 5; j ++)
       {
         a[i][j] = rand() % 100;
         printf("%5d ", a[i][j]);
       }
       printf("\n");
    }

}
