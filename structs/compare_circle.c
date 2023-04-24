// Compare two circles and return true if they are same
// Date : 22-APR-2023

#include <stdio.h>

struct circle
{
  int x, y, radius;
};

int equals(struct circle c1, struct circle c2) {
   return  c1.x == c2.x && c1.y == c2.y && c1.radius == c2.radius;
}

void main()
{
   struct circle c1 = {10,20,15};
   struct circle c2 = {10,20,15};
   struct circle c3 = {10,10,15};

   printf("%d ", equals(c1,c2));
   printf("%d ", equals(c1,c3));


}
