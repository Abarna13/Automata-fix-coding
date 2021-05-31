/*
Write afunction in C programming to calculate sum of digits of a number. How to calculate sum of digits of a given number using function in C program.

Input Format

1245

Constraints

-

Output Format

Sum of digits: 12

Sample Input 0

1245
Sample Output 0

Sum of digits: 12
Sample Input 1

1919
Sample Output 1

Sum of digits: 20

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfDigits(int num);
int main()
{
    int num, sum;
    scanf("%d", &num);
    sum = sumOfDigits(num);
    printf("Sum of digits: %d", sum);
    return 0;
}

int sumOfDigits(int num)
{
    if(num == 0)
        return 0;
    return ((num % 10) + sumOfDigits(num / 10));
}