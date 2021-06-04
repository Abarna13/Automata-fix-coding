/*
Write a C program to add two distances in feet and inches using structure , structure named distance with two integer members feet and inches, we are implementing a user define function named addDistance() that will take two structure objects and print sum (addition) of their elements.

Input Format

10 8 5 7

Constraints

-

Output Format

Total distance- Feet: 16, Inches: 3

Sample Input 0

10 8
5 7
Sample Output 0

Total distance- Feet: 16, Inches: 3
Sample Input 1

1 6
20 14
Sample Output 1

Total distance- Feet: 22, Inches: 8

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct distance
{
    int feet;
    int inch;
};

void addDistance(struct distance d1,struct distance d2)
{
    struct distance d3;
    d3.feet= d1.feet + d2.feet;
    d3.inch= d1.inch + d2.inch;
    d3.feet= d3.feet + d3.inch/12; 
    d3.inch= d3.inch%12;
    printf("Total distance- Feet: %d, Inches: %d",d3.feet,d3.inch);
}

int main()
{
    struct distance d1,d2;
    scanf("%d%d",&d1.feet, &d1.inch);
    scanf("%d%d",&d2.feet, &d2.inch);
    addDistance(d1,d2);
    return 0;
}