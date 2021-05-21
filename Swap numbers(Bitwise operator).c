/*
Write a C Program to Swap two Numbers using Bitwise operators?

Input Format

44 54

Constraints

-

Output Format

before swapping a=44 and y=54 after swapping a=54 and y=44

Sample Input 0

44
54
Sample Output 0

before swapping a=44 and y=54
after swapping a=54 and y=44
Sample Input 1

440
540
Sample Output 1

before swapping a=440 and y=540
after swapping a=540 and y=440

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
void swap(int*, int *);
 
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("before swapping a=%d and y=%d", num1, num2);
    swap(&num1, &num2);        
    printf("\nafter swapping a=%d and y=%d", num1, num2);
}
 
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}