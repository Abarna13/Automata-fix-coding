/*
Complete the following c program to sort the given array values using bubble sort.

Input Format

7 46 43 52 21 33 22 89

Constraints

-

Output Format

Sorted list using bubble sort: 21 22 33 43 46 52 89

Sample Input 0

7
46 43 52 21 33 22 89
Sample Output 0

Sorted list using bubble sort: 
21 22 33 43 46 52 89 
Sample Input 1

5
32
10
2
36
87
Sample Output 1

Sorted list using bubble sort: 
2 10 32 36 87

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
int main()
{
    int array[100], n, i, j, swap;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    scanf("%d", &array[i]);
    for(i = 0 ; i < n - 1; i++)
    {
        for(j = 0 ; j < n-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                swap=array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }
    printf("Sorted list using bubble sort:\n");
    for(i = 0; i < n; i++)
    printf("%d ", array[i]);
    return 0;
}