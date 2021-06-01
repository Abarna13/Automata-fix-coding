/*
C Program for Print integer number in a given range using register

Input Format

1 6

Constraints

-

Output Format

1 2 3 4 5 6

Sample Input 0

1
6
Sample Output 0

1 2 3 4 5 6
Sample Input 1

2
10
Sample Output 1

2 3 4 5 6 7 8 9 10 

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num,m,n;
    scanf ("%d %d", &m, &n);
    for (num = m; num <= n; num++)
    {
        printf("%d ", num);
    }
    return 0;
}