/*
C program to find remainder without using modulo operator Algorithm : 1.First read the number and divisor as entered by the user. 2.Keep subtracting the divisor from the number and set the value to the number till the number become less than divisor. 3.If the number becomes less than divisor, it should be the required remainder. 4.Print out the result.

Input Format

12 4

Constraints

-

Output Format

The remainder is 0

Sample Input 0

12
4
Sample Output 0

The remainder is 0
Sample Input 1

555
4
Sample Output 1

The remainder is 3

*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int no,divisor,remainder;
    scanf("%d",&no);
    scanf("%d",&divisor);
    while(no >= divisor)
    {
        no = no - divisor;
    }
    remainder = no;
    printf("The remainder is %d ",remainder);
    return 0;
}