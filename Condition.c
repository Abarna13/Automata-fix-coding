/*
debug the code and produce the expected output?

Input Format

10 100 200

Constraints

-

Output Format

100

Sample Input 0

10
100
200
Sample Output 0

100

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
    int a=10, b;  
    b=((a>=5)?(100):(200));
    printf("%d" , b);
    return 0;
}