/*
Write a C program to read weekday number and print weekday name using switch.

Input Format

2

Constraints

-

Output Format

Tuesday

Sample Input 0

3
Sample Output 0

Wednesday
Sample Input 1

5
Sample Output 1

Friday

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int wDay;
    scanf("%d",&wDay);
    switch(wDay)
    {
        case 0: 
            printf("Sunday");
            break;
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        default:
            printf("Invalid weekday number.");
    }
    printf("\n");
    return 0;
}