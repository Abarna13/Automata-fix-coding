/*
write a program to print the alphabets according to the given values using pointers?

Input Format

5

Constraints

-

Output Format

A B C D E

Sample Input 0

5
Sample Output 0

A  B  C  D  E
Sample Input 1

10
Sample Output 1

A  B  C  D  E  F  G  H  I  J
Sample Input 2

1
Sample Output 2

A

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
    char alph[27];
    int x,n;
    scanf("%d",&n);
    char *ptr;
    ptr = alph;    

    for(x=0;x<n;x++)
    {
        *ptr=x+'A';
        ptr++;
    }
    ptr = alph;


    for(x=0;x<n;x++)
    {
       printf("%c  ", *ptr);
        ptr++;
    }
    return(0);
}