/*
C Program to Reverse String Without Using Library Function

Input Format

College

Constraints

-

Output Format

egelloC

Sample Input 0

Engineering
Sample Output 0

gnireenignE
Sample Input 1

Hello
Sample Output 1

olleH

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char str[100], temp;
    int i, j = 0;
    gets(str);
    i = 0;
    j = strlen(str) - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
   }
    printf("%s", str);
   return (0);
}