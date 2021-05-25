/*
write a program to insert a new element 100 in 3 rd position in the existing array a={10,20,30,40,50}?

Input Format

10 20 30 40 50 100 3

Constraints

-

Output Format

10 20 30 100 40 50

Sample Input 0

5
10 20 30 40 50
100
3
Sample Output 0

10 20 30 100 40 50
Sample Input 1

5
100 200 300 400 500
10
4
Sample Output 1

100 200 300 400 10 500
Sample Input 2

5
5 10 15 20 25
50
6
Sample Output 2

Invalid position

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
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, size, num, pos;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    scanf("%d", &pos);
    if(pos > size)
    {
        printf("Invalid position");
    }
    else
    {
           for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = num;
        size++; 
        for(i=0; i<size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}