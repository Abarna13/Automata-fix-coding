/*
write a program to get the values & mutiply and display the result?

Input Format

20.50 30

Constraints

-

Output Format

615.00

Sample Input 0

20.50
30
Sample Output 0

615.00
Sample Input 1

20
30.50
Sample Output 1

610.00
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
    float f1,f2,f3;
    scanf("%f", &f1);
    scanf("%f", &f2);
    f3=f1*f2;
    printf("%.2lf",f3);
    return 0;
}
