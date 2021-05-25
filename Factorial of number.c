/*
Write a c program to Find Factorial Of A Number Using For Loop

Input Format

5

Constraints

-

Output Format

Factorial = 120

Sample Input 0

5
Sample Output 0

Factorial = 120
Sample Input 1

6
Sample Output 1

Factorial = 720

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()    
{
    int i,fact=1,number;
    scanf("%d",&number);    
    for(i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    printf("Factorial = %d",fact);
    return 0;  
}