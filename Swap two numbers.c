/*
Swap two numbers with out using temporary variable and usng Arithmethic operators

Input Format

10 20

Constraints

-

Output Format

Before Swapping: 10 20 After Swapping: 20 10

Sample Input 0

10
20
Sample Output 0

Before Swapping: 10 20
After Swapping: 20 10
Sample Input 1

100
500
Sample Output 1

Before Swapping: 100 500
After Swapping: 500 100
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
    int a,b;
    scanf("%d%d", &a, &b);
    printf("Before Swapping: %d %d", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Swapping: %d %d", a, b);
    return 0;
}
