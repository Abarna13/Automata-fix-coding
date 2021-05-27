/*
Complete the following c code to eliminate first character of each word of a string.

Input Format

Welcome to saveetha engineering college

Constraints

-

Output Format

Input string is... Welcome to saveetha engineering college After eliminating first character of each word... elcome o aveetha ngineering ollege

Sample Input 0

Welcome to saveetha engineering college
Sample Output 0

Input string is...
Welcome to saveetha engineering college
After eliminating first character of each word...
elcome o aveetha ngineering ollege
Sample Input 1

Wear mask to protect yourself
Sample Output 1

Input string is...
Wear mask to protect yourself
After eliminating first character of each word...
ear ask o rotect ourself


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
#define MAX 100

int main()
{
    char text[MAX]={0};
    int loop,j;
    scanf("%[^\n]s",text);
    printf("Input string is...\n");
    printf("%s\n",text);
    for(loop=0; text[loop]!='\0'; loop++)
    {
        if(loop==0 || (text[loop]==' ' && text[loop+1]!=' '))
        {
            for(j=((loop==0)?loop:loop+1); text[j]!='\0'; j++)
                text[j]=text[j+1];
        }        
            
    }
    printf("After eliminating first character of each word...\n");
    printf("%s\n",text);
    return 0;
}

