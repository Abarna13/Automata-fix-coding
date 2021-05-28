/*
write a program to remove the no.of.characters from the existing string based on the position?

Input Format

welcome 2 4

Constraints

-

Output Format

lcom

Sample Input 0

welcome
2
4
Sample Output 0

lcom
Sample Input 1

saveetha
3
3
Sample Output 1

eet
Sample Input 2

programming
1
6
Sample Output 2

rogram

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
    char string[20],sub[20];
    int position,length,i=0;
    scanf("%s",string);
    scanf("%d%d", &position, &length);
    while (i < length)
     {
     sub[i] = string[position+i];
     i++;
    }
    sub[i]='\0';
    printf("%s\n",sub);
    return 0;
}