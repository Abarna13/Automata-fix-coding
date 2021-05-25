/*
Write a program to produce the given format?

Input Format

5

Constraints

-

Output Format

5 10 15 20 25

Sample Input 0

5
Sample Output 0

5 10 15 20 25
Sample Input 1

10
Sample Output 1

10 20 30 40 50 60 70 80 90 100

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
    int n,i,r=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=n*i;
        printf("%d ",r);
    }
    return 0;
}