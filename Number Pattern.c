/*
Check whether the below program print the below pattern.update the code to get the desired output.

Input Format

4

Constraints

-

Output Format

1 22 333 4444 4444 333 22 1

Sample Input 0

4
Sample Output 0

1
22
333
4444
4444
333
22
1
Sample Input 1

3
Sample Output 1

1
22
333
333
22
1

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
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        for(j=1;j<=i;j=j+1)
        {
            printf("%d",i);
        }
         printf("\n");
    }
    for(i=n;i>=1;i=i-1)
    {
        for(j=1;j<=i;j=j+1)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}