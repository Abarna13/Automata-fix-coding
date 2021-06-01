/*
write a program for auto storage class variable?

Input Format

-

Constraints

-

Output Format

10 10 10 10

Sample Input 0

-
Sample Output 0

10 10 10 10 

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

void increment(void);
int main()
{
    increment();
    increment();
    increment();
    increment();
    return 0;
}


void increment(void)
{
    auto int i = 10 ;
    printf ( "%d ", i ) ;
    i++;
}