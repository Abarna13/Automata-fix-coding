/*
Provide the output using extern keyword

Input Format

1

Constraints

-

Output Format

output:1

Sample Input 0

5
Sample Output 0

output:5
Sample Input 1

24
Sample Output 1

output:4
Sample Input 2

8
Sample Output 2

output:8
Sample Input 3

28
Sample Output 3

output:8

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
extern int a;
int main()
{
    int a,lastDigit;
    scanf("%d",&a);
    lastDigit = a % 10;
    printf("output:%d",lastDigit);
    return 0;
}