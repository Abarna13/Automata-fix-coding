/*
If a radio is purchased for rs.490 and sold for rs.465.50.find the gain or loss percentage.

Input Format

490 465.50

Constraints

-

Output Format

Loss:24.50 Loss percentage:5.00

Sample Input 0

490
465.50
Sample Output 0

Loss:24.50
Loss percentage:5.00
Sample Input 1

700
800.50
Sample Output 1

Profit:100.50
Gain percentage:14.36
Sample Input 2

900
900
Sample Output 2

No Profit No Loss.
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
    float cp,sp, amt;
    float gp,lp;
    scanf("%f%f",&cp,&sp);
    if(sp > cp)
    {
        amt=sp-cp;
        gp=(amt/cp)*100;
        printf("Profit:%.2f",amt);
        printf("\nGain percentage:%.2f",gp);
    }
    else if(cp > sp)
    {
        amt=cp-sp;
        lp=(amt/cp)*100;
        printf("Loss:%.2f", amt);
        printf("\nLoss percentage:%.2f",lp);
    }
    else
    {
        printf("No Profit No Loss.");
    }
    return 0;
}