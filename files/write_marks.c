// Write marks of 10 students into marks.dat
// Date : 28-APR-2023

#include <stdio.h>

void main()
{
   FILE * fp;
   int i, m;

      fp = fopen("marks.dat", "wb");

      if(fp == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1); // exit due to error
      }

      srand(time(0));

      for(i = 1; i <= 10; i ++)
      {
         m = rand() % 100;
         fwrite(&m, sizeof(m), 1,fp);
      }

      fclose(fp);
}
