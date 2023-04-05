// Calculate total and avg marks of two subjects
// Date : 28-mar-2023

#include <stdio.h>

void main()
{
 int marks_eng, marks_maths, total_marks;
 float avg_marks;

    printf("Enter marks in English:");
    scanf("%d", &marks_eng);
    printf("Enter marks in Maths  :");
    scanf("%d", &marks_maths);

    total_marks = marks_eng + marks_maths;
    avg_marks = total_marks / 2.0;

    printf("Total: %d, Average: %5.2f",total_marks, avg_marks);
}
