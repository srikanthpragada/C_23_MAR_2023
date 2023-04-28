// Compare files
// Date : 28-APR-2023

#include <stdio.h>

void main()
{
   FILE * fp1, *fp2;
   char filename1[50], filename2[50];
   int ch1, ch2;


      printf("Enter filename1 :");
      gets(filename1);
      printf("Enter filename2 :");
      gets(filename2);

      fp1 = fopen(filename1, "rt");

      if(fp1 == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1); // exit due to error
      }

      fp2 = fopen(filename2, "rt");

      if(fp2 == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1); // exit due to error
      }

      while(1)
      {
          ch1 = fgetc(fp1);
          ch2 = fgetc(fp2);
          if (ch1 == EOF && ch2 == EOF)
          {
              printf("Files are same!");
              break;
          }

          if(ch1 != ch2)
          {
              printf("Files are not same!");
              break;
          }
      }

      fclose(fp1);
      fclose(fp2);
}
