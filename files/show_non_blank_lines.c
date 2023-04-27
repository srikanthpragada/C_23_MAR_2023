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

      while(1)
      {
          p = fgets(line, 100, fp);
          if (p == NULL) // EOF
               break;

          // even blank line contains \n so length > 1
          if(strlen(line) > 1)  // non-blank line
              printf("%s", line);
      }

      fclose(fp);
}
