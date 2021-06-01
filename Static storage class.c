/*
Write a program to produce the expected output using static storage class?

Input Format

10

Constraints

-

Output Format

11 21 31 41

Sample Input 0

10
Sample Output 0

11 21 31 41
Sample Input 1

5
Sample Output 1

6 11 16 21
Sample Input 2

8
Sample Output 2

9 17 25 33

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
void display(int m)
{
    static int c = 1;
    c += m;
    printf("%d ",c);
}
int main()
{
    int n;
    scanf("%d",&n);
    display(n);
    display(n);
    display(n);
    display(n);
    return 0;
}