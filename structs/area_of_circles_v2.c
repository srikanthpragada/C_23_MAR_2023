// Create a struct to store details of circles and display area for all
// Date : 22-APR-2023

#include <stdio.h>

struct circle
{
  int x, y, radius;
};

float calculate_area(struct circle c)
{
   return (22 / 7.0) * c.radius * c.radius;
}

struct circle max(struct circle c1, struct circle c2)
{
   if (calculate_area(c1) > calculate_area(c2))
      return c1;
   else
      return c2;
}

void print_circle(struct circle c)
{
    printf("%2d %2d %2d %8.2f\n", c.x,c.y,c.radius, calculate_area(c));
}

void main()
{
   struct circle circles[5];
   struct circle c;
   int i;


    srand(time(0));

    for(i = 0; i < 5; i ++)
    {
       circles[i].x = rand() % 100;
       circles[i].y = rand() % 100;
       circles[i].radius = rand() % 25;
    }

    for(i = 0; i < 5; i ++)
    {
       print_circle(circles[i]);
    }

}
