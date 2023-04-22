// Create a struct to store details of a circle
// Date : 22-APR-2023

#include <stdio.h>

struct circle
{
  int x, y, radius;

};
void main()
{
   struct circle c = {10,20,15};
   float area;

   /*
    c.x = 10;
    c.y = 20;
    c.radius = 15;
    */

    area = (22 / 7.0) * c.radius * c.radius;
    printf("Area = %.2f", area);


}
