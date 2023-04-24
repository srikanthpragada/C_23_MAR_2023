// Nested structures
// Date : 24-APR-2023

#include <stdio.h>
struct point
{
     int x,y;
};

struct rect
{
  struct point start;
  int length, width;
};


void main()
{
   struct rect r = { {10,20}, 20,30};

   printf("%d, %d", r.start.x, r.start.y);

}
