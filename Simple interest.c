/*
write a program to find simple interest for the given value?

Input Format

1000 5 10

Constraints

-

Output Format

The simple interest is:500

Sample Input 0

1000
5
10
Sample Output 0

The simple interest is:500
Sample Input 1

4000
2
3
Sample Output 1

The simple interest is:240
Sample Input 2

100
1
2
Sample Output 2

The simple interest is:2

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
    int p1,n1,r1, si;

    scanf("%d", &p1);

    scanf("%d", &n1);

    scanf("%d",&r1);

    si = (p1 * n1 *r1) /100;

    printf("The simple interest is:%d",si);

    return 0;
}
