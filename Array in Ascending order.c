/*
Write a C Program to sort an array in ascending order.

Input Format

3 3 1 2

Constraints

-

Output Format

The numbers arranged in ascending order are given below 1 2 3

Sample Input 0

3
3
1
2
Sample Output 0

The numbers arranged in ascending order are given below 
1
2
3
Sample Input 1

2
6
5
Sample Output 1

The numbers arranged in ascending order are given below 
5
6

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num[20];
    int i, j, a, n;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    scanf("%d", &num[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] > num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\n", num[i]);
    }
    return 0;

}