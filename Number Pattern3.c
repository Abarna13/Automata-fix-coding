/*
A program has to produce the output given below:

1

1 2

1 2 3

1 2 3 4

1 2 3 4 5

The following program has one line missing. What should be the statement in the missing line?

Input Format

-

Constraints

-

Output Format

1 12 123 1234 12345

Sample Output 0

1
12
123
1234
12345

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
    int i = 5, j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

