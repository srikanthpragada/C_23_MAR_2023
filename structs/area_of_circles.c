// Create a struct to store details of circles and display area for all
// Date : 22-APR-2023

#include <stdio.h>

struct circle
{
  int x, y, radius;

};
void main()
{
   struct circle circles[5];
   struct circle c;
   int i;
   float area;

    for(i = 0; i < 5; i ++)
    {
        printf("Enter circle details :");
        scanf("%d%d%d", &circles[i].x, &circles[i].y, &circles[i].radius);
    }

    for(i = 0; i < 5; i ++)
    {
       c = circles[i];
       area = (22 / 7.0) * c.radius * c.radius;
       printf("%2d %2d %2d %8.2f\n", c.x,c.y,c.radius, area);
    }

}
