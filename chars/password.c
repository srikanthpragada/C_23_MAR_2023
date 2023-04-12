// Accept a password and validate it
// Date : 12-APR-2023

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
 char ch, i, upper, digit;

    upper = digit = 0;   // set flags to false
    printf("Enter Password :");
    for(i = 1; i <= 8; i ++)
    {
       ch = getch();
       putch('*');
       if (isupper(ch))
           upper = 1;
       else
        if(isdigit(ch))
           digit = 1;
    }

    if(upper && digit)
        printf("\nValid Password");
    else
        printf("\nInvalid Password");
}
