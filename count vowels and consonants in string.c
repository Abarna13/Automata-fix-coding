/*
Write a program in C to count the number of vowels and consonants in a string using a pointer.

Input Format

string

Constraints

-

Output Format

Number of Vowels:1 Number of Consonants:5

Sample Input 0

string
Sample Output 0

Number of Vowels:1
Number of Consonants:5  
Sample Input 1

character
Sample Output 1

Number of Vowels:3
Number of Consonants:6

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char line[150];
    int vowels, consonant, digit, space;
    vowels = consonant = digit = space = 0;
    fgets(line, sizeof(line), stdin);
    for (int i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||line[i] == 'U')
        {
            ++vowels;
        }
       
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            ++consonant;
        }
       
        else if (line[i] >= '0' && line[i] <= '9')
        {
            ++digit;
        }
       
        else if (line[i] == ' ')
        {
            ++space;
        }
    }
    printf("Number of Vowels:%d", vowels);
    printf("\nNumber of Consonants:%d", consonant);
    return 0;
}