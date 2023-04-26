// Read names from file - names.txt
// Date : 26-APR-2023

#include <stdio.h>

void main()
{
   FILE * fp;
   int ch;

      fp = fopen("names.txt", "rt");

      if(fp == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1); // exit due to error
      }

      while(1)
      {
          ch = fgetc(fp);
          if (ch == EOF)  // end of file
             break;

          putch(ch);
      }

      fclose(fp);
}
