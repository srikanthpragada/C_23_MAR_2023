// Structure for course
// Date : 21-APR-2023

#include <stdio.h>

struct course
{
   // members
   char title[30];
   int fee, duration;
};


void main()
{
  struct course c;

      strcpy(c.title,"Java");
      c.fee = 10000;
      c.duration = 30;

      printf("%s %d %d", c.title, c.fee, c.duration);


}
