/*
Write a program in C to convert decimal number to binary number using the function.

Input Format

65

Constraints

-

Output Format

The Binary value is : 1000001

Sample Input 0

65
Sample Output 0

The Binary value is : 1000001
Sample Input 1

58
Sample Output 1

The Binary value is : 111010

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    long long decimal, tempDecimal, binary;
    int rem, place = 1;
    binary = 0;
    scanf("%lld", &decimal);
    tempDecimal = decimal;
    while(tempDecimal > 0)
    {
        rem = tempDecimal % 2;
        binary = (rem * place) + binary;
        tempDecimal /= 2;
        place *= 10;
    }
    printf("The Binary value is : %lld", binary);
    return 0;
}