/*
Complete the following code to get the desired output. Note: declare the global variables num1,num2

Input Format

-

Constraints

-

Output Format

num1 = 10, num2 = 20 addition = 30 subtraction = -10 multiplication = 200

Sample Output 0

num1 = 10, num2 = 20
addition = 30
subtraction = -10
multiplication = 200

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
int num1,num2;
int main()
{
    void addition();

    void subtraction();

    void multiplication();

    num1 = 10;

    num2 = 20;

    printf("num1 = %d, num2 = %d", num1, num2);

    addition();

    subtraction();

    multiplication();
    
    return 0;

}

void addition()

{
    int result;
        
    result = num1 + num2;

    printf("\naddition = %d", result);

}

void subtraction()

{
        
    int result;
        
    result = num1 - num2;

    printf("\nsubtraction = %d", result);
        
}

void multiplication()

{

    int result;
        
    result = num1 * num2;

    printf("\nmultiplication = %d", result) ;

}