// Display contents of a file taken from user
// Date : 26-APR-2023

#include <stdio.h>

void main()
{
   FILE * fp;
   char filename[50];
   int ch;

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
          ch = fgetc(fp);
          if (ch == EOF)  // end of file
             break;

          putch(ch);
      }

      fclose(fp);
}
