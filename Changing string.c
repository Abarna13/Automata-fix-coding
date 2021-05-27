/*

write a program to add the world string in to hello string with out using built function?

Input Format

hello world

Constraints

-

Output Format

helloworld

Sample Input 0

hello
world
Sample Output 0

helloworld
Sample Input 1

india
indian
Sample Output 1

indiaindian
Sample Input 2

INDIA
WELCOME
Sample Output 2

INDIAWELCOME

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
    char str1[100], str2[100];
    char str3[100];
    int i = 0, j = 0;
    scanf("%s",&str1);
    scanf("%s",&str2);
    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    printf("%s", str3);
    return 0;
}