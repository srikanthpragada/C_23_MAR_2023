// Display lines of a file with line numbers
// Date : 28-APR-2023

#include <stdio.h>

void main()
{
   FILE * fp;
   char filename[50], line[100], *p;
   int lno = 1;


      printf("Enter filename :");
      gets(filename);

      fp = fopen(filename, "rt");

      if(fp == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1); // exit due to error
      }

      while(1)
      {
          p = fgets(line, 100, fp);
          if (p == NULL) // EOF
               break;

          printf("%03d: %s",lno, line);
          lno ++;
      }

      fclose(fp);
}
