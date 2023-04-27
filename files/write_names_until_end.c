// Take names until end is given and write them into file - names.txt
// Date : 27-APR-2023

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

      while(1)
      {
          printf("Enter name [end to stop] :");
          gets(name);

          if (stricmp(name, "end") == 0)
               break;

          fprintf(fp, "%s\n", name);
      }

      fclose(fp);
}
