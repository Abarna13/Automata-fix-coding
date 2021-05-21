/*
Write a C Program to check whether the input character is a vowel or Consonant using ASCII Values and use if-elseif statement? Hint:Use Logical Operator

Input Format

u

Constraints

-

Output Format

u is a VOWEL.

Sample Input 0

u
Sample Output 0

u is a VOWEL.
Sample Input 1

k
Sample Output 1

k is a CONSONANT.
*/

#include <stdio.h>
int main()
{
    char c;
    int lowercase_vowel, uppercase_vowel;
    scanf("%c", &c);
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a VOWEL.", c);
    else
        printf("%c is a CONSONANT.", c);
    return 0;
}
