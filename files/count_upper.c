// Count uppercase letters in names.txt
// Date : 27-APR-2023

#include <stdio.h>

void main()
{
   FILE * fp;
   int ch, count = 0;

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

          if(isupper(ch))
             count ++;
      }

      fclose(fp);
      printf("Uppercase Count = %d", count);
}
