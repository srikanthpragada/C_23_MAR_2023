// Convert cm to inches
// Date : 27-mar-2023

#include <stdio.h>

void main()
{
 int cm, inches;

    // take cm from user
    printf("Enter centimerters :");
    scanf("%d", &cm);

    // process
    inches = cm / 2.54;

    // output
    printf("%d cm = %d inches", cm, inches);
}
