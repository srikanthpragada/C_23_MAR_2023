// Read marks from marks.dat
// Date : 28-APR-2023

#include <stdio.h>

void main()
{
   FILE * fp;
   int count, m;

      fp = fopen("marks.dat", "rb");
      if(fp == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1); // exit due to error
      }

      while(1)
      {
         count =  fread(&m, sizeof(m), 1,fp);
         if(count == 0) // EOF
            break;

         printf("%d ", m);
      }

      fclose(fp);
}
