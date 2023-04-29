// Read marks for the given rollno from marks.dat
// Date : 29-APR-2023

#include <stdio.h>

void main()
{
   FILE * fp;
   int count, pos, rollno, m;

      fp = fopen("marks.dat", "rb");
      if(fp == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1); // exit due to error
      }

      while(1)
      {
         printf("Enter rollno [0 to stop] :");
         scanf("%d",&rollno);
         if(rollno == 0)
            break;

         pos = sizeof(int) * (rollno - 1);
         // Move file pointer to required position
         fseek(fp, pos, SEEK_SET);

         // Read a block
         count =  fread(&m, sizeof(m), 1,fp);

         if(count == 0) // not found
            printf("Sorry! Rollno not found!\n");
         else
            printf("Marks of student %d are %d\n", rollno,m);
      }

      fclose(fp);
}
