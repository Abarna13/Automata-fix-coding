/*
Complete the following code to get the desired output.

Input Format

4

Constraints

-

Output Format

1* 2*3* 4*5*6* 7*8*9*10*

Sample Input 0

4
Sample Output 0

1*
2*3*
4*5*6*
7*8*9*10*
Sample Input 1

6
Sample Output 1

1*
2*3*
4*5*6*
7*8*9*10*
11*12*13*14*15*
16*17*18*19*20*21*

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
    int i,j,n,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d*",k++);
    printf("\n");
   }   
    return 0;
}
