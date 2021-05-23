/*
Find the syntax error in the below code without modifying the logic?

Input Format

1

Constraints

-

Output Format

welcome

Sample Input 0

1
Sample Output 0

welcome
Sample Input 1

2
Sample Output 1

saveetha
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
    int x;
    scanf("%d",&x);
    switch (x)
    {
        case 1: printf("welcome");
        break;
        case 2: printf("saveetha");
        break;
    }
    return 0;
}