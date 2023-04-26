// Write names into file - names.txt
// Date : 26-APR-2023

#include <stdio.h>

void main()
{
   FILE * fp;
   char name[20];
   int i;

      fp = fopen("names.txt", "at");

      if(fp == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1); // exit due to error
      }

      for(i = 1; i <= 5; i ++)
      {
          printf("Enter name :");
          gets(name);
          fprintf(fp, "%s\n", name);
      }

      fclose(fp);
}
