// Find out largest rectangle
// Date : 24-APR-2023

#include <stdio.h>

struct rect
{
  int length, width;
};

int getarea(struct rect r)
{
   return  r.length * r.width;
}

void print_rect(struct rect r)
{
    printf("%d * %d", r.length, r.width);
}

void main()
{
   struct rect rectangles[] = { {10,20}, {11,5} , {4,5}, {10,10}, {40,20}};
   int i, area, pos, largest_area = 0;


   for(i = 0; i < 5; i ++)
   {
       area = getarea(rectangles[i]);
       if (area > largest_area) {
           largest_area = area;
           pos = i; // found largest rect here
       }
   }

   print_rect(rectangles[pos]);
}
