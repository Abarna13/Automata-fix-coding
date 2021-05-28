/*
Complete the C program to accept Sorted Array and do Search using Binary Search

Input Format

5 2 31 45 63 87 95

Constraints

-

Output Format

95 not found

Sample Input 0

5
2
31
45
63
87
95
Sample Output 0

95 not found
Sample Input 1

7
10 23 40 51 58 95 93
51
Sample Output 1

51 found at position 4
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
    int c, first, last, middle, n, search, array[100];
    scanf("%d", &n);
    for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first+last)/2;
    while (first <= last)
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d found at position %d\n", search, middle+1);
            break;
        }
        else
            last = middle - 1;
        middle = (first + last)/2;
    }
    if (first > last)
        printf("%d not found \n", search);
    return 0;
}