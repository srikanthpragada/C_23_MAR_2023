// Function declaration vs. function definition
// Date : 18-APR-2023

#include <stdio.h>

// function declaration
float avg(int, int);

void main()
{
   printf("Result = %f", avg(10,21));
}


// function definition
float avg(int a, int b)
{
   return (a + b) / 2.0;
}
