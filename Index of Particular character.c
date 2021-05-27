/*
Program to get the indexes of a particular characters in C

Input Format

Welcome to c programming c

Constraints

-

Output Format

Indexes:3 11

Sample Input 0

saveetha engineering college
e
Sample Output 0

Indexes:3 4 9 14 15 25 27 
Sample Input 1

hi welcome to saveetha
w
Sample Output 1

Indexes:3 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main()
{
    char str[30],ch;
    int  ind[10],loop,j;
    scanf("%[^\n]s",str);
    getchar();
    ch=getchar();
    j=0;
    for(loop=0; str[loop]!='\0'; loop++)
    {
        if(str[loop]==ch)
            ind[j++]=loop;
    }
    printf("Indexes:");
    for(loop=0; loop<j; loop++)
        printf("%d ",ind[loop]);

    return 0;
}