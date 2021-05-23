/*
Complete the give code to arrange the given array values using selection sort with the best case time complexity O(n^2)

Input Format

5 23 10 4 69 2

Constraints

-

Output Format

Given Array: 23 10 4 69 2

Sorted Array: 2 4 10 23 69

Sample Input 0

5
23
10
4
69
2
Sample Output 0

Given Array: 23 10 4 69 2

Sorted Array: 2 4 10 23 69
Sample Input 1

4
21
3
60
5
Sample Output 1

Given Array: 21 3 60 5

Sorted Array: 3 5 21 60

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
    int n;
    scanf("%d",&n);
    int nArr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nArr[i]);
    }
    int nMin=0;
    int t=0, i=0, j=0;
    printf("Given Array:");
    for(i=0;i<n;i++)
    {
        printf(" %d", nArr[i]);
    }
    for(i=0; i<n-1; i++)
    {
        nMin=i;
        for(j=i+1; j<n; j++)
        {
            if(nArr[j]<nArr[nMin])
            nMin = j;
        }
        t=nArr[i];
        nArr[i]=nArr[nMin];
        nArr[nMin]=t;
    }
    printf("\n\nSorted Array:");
    for(i=0;i<n;i++)
    {
        printf(" %d", nArr[i]);
    }
    printf("\n");
    return 0;
}