/*
write a best sorting algorithm for arranging the book numbers 85,12,59,45,72,51 in library?

Input Format

85,12,59,45,72,51

Constraints

-

Output Format

12 45 51 59 72 85

Sample Input 0

6
85 12 59 45 72 51
Sample Output 0

12 45 51 59 72 85
Sample Input 1

6
67 78 66 54 33 22
Sample Output 1

22 33 54 66 67 78

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
    int a[100], n, i, j, position, swap;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    for(i = 0; i < n - 1; i++)
    {
        position=i;
        for(j = i + 1; j < n; j++)
        {
            if(a[position] > a[j])
            position=j;
        }
        if(position != i)
        {
            swap=a[i];
            a[i]=a[position];
            a[position]=swap;
        }
    }
    for(i = 0; i < n; i++)
    printf("%d ", a[i]);
    return 0;
}
