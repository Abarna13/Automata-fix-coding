/*
write a program to find out the total & average of 5 marks with out using array?

Input Format

80 80 80 80 80

Constraints

-

Output Format

total:400 avg:80

Sample Input 0

80
80
80
80
80
Sample Output 0

total:400
avg:80.00
Sample Input 1

78
66
78
99
67
Sample Output 1

total:388
avg:77.60

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
    int n=4,m,i=0;
    float avg,tot=0;
    while(i<=n)
    {
        scanf("%d",&m);
        tot+=m;
        i++;
    }
    avg=tot/5;
    printf("total:%0.0f",tot);
    printf("\navg:%.2f",avg);
    return 0;
}
