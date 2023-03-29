// Display result based on marks
// Date : 29-mar-2023

#include <stdio.h>

void main()
{
 int marks;

    printf("Enter marks :");
    scanf("%d", &marks);

    if(marks >= 50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

}
