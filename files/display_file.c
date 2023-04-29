// Display contents of a file taken from user
// Date : 26-APR-2023

#include <stdio.h>

void main(int argc, char * argv[])
{
   FILE * fp;
   int ch;


      fp = fopen(argv[1], "rt");

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
