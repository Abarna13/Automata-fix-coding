/*
Check for syntax error/ logical error and correct the error to get the desired output.

Given n, print 0 to n by identifying whether the n is even or odd.

Input Format

10

Constraints

-

Output Format

0 2 4 6 8 10

Sample Input 0

10
Sample Output 0

0 2 4 6 8 10 
Sample Input 1

5
Sample Output 1

1 3 5 

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
    int n, i;
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=0;i<=n;i=i+2)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(i=1;i<=n;i=i+2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
