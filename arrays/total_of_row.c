// Take 5X5 elements array and fill it with random numbers and display
// total of each row
// Date : 13-APR-2023

#include <stdio.h>


void main()
{
 int a[5][5], i, j, total;

    srand(time(0));  // init random seed

    for(i = 0; i < 5; i ++)
    {
       total = 0;
       for(j = 0; j < 5; j ++)
       {
         a[i][j] = rand() % 25;
         printf("%5d", a[i][j]);
         total += a[i][j];
       }
       printf("%5d\n", total);
    }

}
