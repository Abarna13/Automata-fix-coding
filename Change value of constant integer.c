/*
Complete the C program to change the value of constant integer using pointers.

Input Format

-

Constraints

-

Output Format

Before changing - value of a: 10 After changing - value of a: 20

Sample Output 0

Before changing - value of a: 10
After  changing - value of a: 20

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
    const int a=10;     
    int *p;             
    p=&a;               
    printf("Before changing - value of a: %d",a);
    *p=20;
    printf("\nAfter  changing - value of a: %d", *p);
    return 0;
}