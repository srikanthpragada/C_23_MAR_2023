// Prints square of the given number
// Date : 27-mar-2023

#include <stdio.h>

void main()
{
 int num, square;  // declare variables

    // take number from user
    printf("Enter a number :");
    scanf("%d", &num);
    square = num * num;
    printf("Square of %d is %d", num, square);
}
