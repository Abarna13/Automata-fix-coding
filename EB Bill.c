/*
write a program to calculate EB bill using functions? unit<=100 rs 1.50 per unit unit>100 and unit<=250 rs 2.00 per unit unit>250 and unit<=400 rs 3.00 per unit unit>400 rs 4.00 per unit

Input Format

1300 1800

Constraints

-

Output Format

Unit:500 Amount:1300

Sample Input 0

1300
1800
Sample Output 0

unit:500
amount:1300
Sample Input 1

300
500
Sample Output 1

unit:200
amount:350
Sample Input 2

350
700
Sample Output 2

unit:350
amount:750

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
int unit_consumed()
{
    int s,e;
    scanf("%d",&s);
    scanf("%d",&e);
    int units=(e-s);
    return units;
}
void amount_calculate()
{
    int units=unit_consumed();
    int amt;
    if(units<=100)
    {
        amt = units*1.5;
    }
    else if(units<=250)
    {
        amt = (100*1.5)+((units-150) * 2);
    }
    else if(units <= 400)
    {
        amt = (100*1.5)+(150*2)+((units-250) * 3);
    }
    else{
        amt = (100*1.5)+(150*2)+(150*3)+((units-400) * 4);
    }
    printf("unit:%d",units);
    printf("\namount:%d",amt);
}
int main()
{
    amount_calculate();
    return 0;
}
