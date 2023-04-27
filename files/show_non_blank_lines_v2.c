// Display non-blank lines of a file taken from user
// Date : 27-APR-2023

#include <stdio.h>

void main()
{
   FILE * fp;
   char filename[50], line[100], *p;


      printf("Enter filename :");
      gets(filename);

      fp = fopen(filename, "rt");

      if(fp == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1); // exit due to error
      }

      while(!feof(fp))
      {
          fgets(line, 100, fp);
          // Even blank line contains \n so length > 1
          if(strlen(line) > 1)  // non-blank line
              fprintf(stdprn,"%s", line);
      }

      fclose(fp);
}
