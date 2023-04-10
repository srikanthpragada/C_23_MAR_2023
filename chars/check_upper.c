// Check whether char is upper
// Date : 10-APR-2023

#include <stdio.h>

void main()
{
 char ch;

    printf("Enter a char :");
    ch = getchar();

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else
        printf("Not uppercase");
}
