/*
Write a C program to demonstrate working of Unary arithmetic operators(++,--)?

Input Format

10

Constraints

-

Output Format

a is 11 and res is 10 a is 10 and res is 11 a is 11 and res is 11 a is 10 and res is 10

Sample Input 0

10
Sample Output 0

a is 11 and res is 10
a is 10 and res is 11
a is 11 and res is 11
a is 10 and res is 10
Sample Input 1

100
Sample Output 1

a is 101 and res is 100
a is 100 and res is 101
a is 101 and res is 101
a is 100 and res is 100

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
    int a , res;
    scanf("%d",&a);
    res = a++;
    printf("a is %d and res is %d", a,res);
    res = a--;
    printf("\na is %d and res is %d", a, res);
    res = ++a;
    printf("\na is %d and res is %d ",a,res);
    res = --a;
    printf("\na is %d and res is %d", a, res);
    return 0;
}