/*

Complete the following code to Remove Characters in String Except Alphabets

Input Format

@saveeth12a&*

Constraints

-

Output Format

Output String: saveetha

Sample Input 0

@saveeth12a&*
Sample Output 0

Output String: saveetha
Sample Input 1

@#En&8gineeri9ng0
Sample Output 1

Output String: Engineering

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
    char line[150];
    fgets(line, sizeof(line), stdin);
    for (int i = 0, j; line[i] != '\0'; ++i)
    {
        while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0'))
        {
            for (j = i; line[j] != '\0'; ++j)
            {
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }
    printf("Output String: ");
    puts(line);
    return 0;
}