/*
A string is given as input in which all the lower case letters are converted to upper case and the upper case letters are converted to lower case,Write a C Program To Toggle Case Of Character Of A String

Input Format

SaveethA EngineerinG

Constraints

-

Output Format

sAVEETHa eNGINEERINg

Sample Input 0

Hello WOrld
Sample Output 0

hELLO woRLD
Sample Input 1

Welcome
Sample Output 1

wELCOME

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 100 
void toggleCase(char * str);
int main()
{
    char str[MAX_SIZE];
    gets(str);
    toggleCase(str);
    printf("%s", str);
    return 0;
}

void toggleCase(char * str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}