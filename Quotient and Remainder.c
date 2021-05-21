/*
write a program to display the quotient and remainder value of the given data?

Input Format

5 2

Constraints

-

Output Format

quotient=2 remainder=1

Sample Input 0

5
2
Sample Output 0

quotient=2
remainder=1
Sample Input 1

10
5
Sample Output 1

quotient=2
remainder=0

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
    int a = 5, b = 2;
    int q, r;
    scanf("%d%d", &a, &b);
    q=a/b;
    r=a%b;
    printf("quotient=%d\n", q);
    printf("remainder=%d", r);
    return 0;
}
