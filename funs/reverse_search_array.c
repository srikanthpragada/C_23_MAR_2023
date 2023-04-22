// Function to search in an array
// Date : 22-APR-2023

#include <stdio.h>

int search(int a[10], int n)
{
 int i;

     for(i = 9; i >= 0; i --)
     {
        if(a[i] == n)
           return i; // found so return index
     }

     // not found, so return -1
     return -1;
}


void main()
{
   int arr[] = {1,232,343,2,3,42,2,3,34,34};

      printf("%d ", search(arr,3));
      printf("%d ", search(arr,13));

}
