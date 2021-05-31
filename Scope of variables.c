/*
Complete the following code in C using scope of variable to get the desired output.

Input Format

-

Constraints

-

Output Format

5 10 4

Sample Output 0

5
10
4

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

int i = 9;
int main()
{
   {
       int i = 4;
       i = i+1;
       printf("%d\n",i);
       {
           int i = 7;
           i = i+3;
           printf("%d\n",i);
        }
        
        {
            i = i-1;
        }
        printf("%d\n",i);
    }
    return 0;
}