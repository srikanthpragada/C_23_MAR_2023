// Read names.txt line by line
// Date : 27-APR-2023

#include <stdio.h>

void main()
{
   FILE * fp;
   char line[100], *p;

      fp = fopen("names.txt", "rt");
      if(fp == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1); // exit due to error
      }

      while(1)
      {
          p = fgets(line,100,fp);
          if(p == NULL)  // EOF
             break;
          printf("%s", line);
      }

      fclose(fp);

}
