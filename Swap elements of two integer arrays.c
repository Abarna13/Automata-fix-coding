/*
Complete the Program to swap elements of two integer arrays using user define function in C

Input Format

-

Constraints

-

Output Format

The arrays after swap are.. 5 6 7 8 9 0 1 2 3 4

Sample Output 0

The arrays after swap are..
5    6    7    8    9    
0    1    2    3    4

*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapElements(int *arr1 , int *arr2 , int n)
{
    int i=0,temp=0;
    for(i=0 ; i<n ; i++)
    {
        temp    = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;

    }
        
}
    
int main()
{
    int i=0;
    int array_1[6] = {0,1,2,3,4};
    int array_2[6] = {5,6,7,8,9};
    swapElements(array_1,array_2,5);
    printf("The arrays after swap are..\n");
    for(i=0 ; i<5 ; i++)
    {
        printf("%d\t",array_1[i]);
    }
    printf("\n");

    for(i=0 ; i<5 ; i++)
    {
        printf("%d\t",array_2[i]);

    }

    return 0;
}