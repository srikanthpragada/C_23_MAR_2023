// Take 5X5 elements array and fill it with random numbers and search for a number
// Date : 13-APR-2023

#include <stdio.h>


void main()
{
 int a[5][5], i, j, sn, found = 0;

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

    printf("Enter a number : ");
    scanf("%d",&sn);

    for(i = 0; i < 5 && !found; i ++)
    {
       for(j = 0; j < 5; j ++)
       {
          if( a[i][j] == sn)
          {
              printf("Found at %d, %d", i, j);
              found  = 1;
              break;
          }
       }
    }

}
