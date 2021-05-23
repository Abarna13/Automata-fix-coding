/*
Complete the given code to arrange the given array values using insertion sort with the best case time complexity O(n).

Input Format

5 63 1 20 78 25

Constraints

-

Output Format

1 20 25 63 78

Sample Input 0

5
63
1
20
78
25
Sample Output 0

1 20 25 63 78
Sample Input 1

6
23
14
52
21
78
10
Sample Output 1

10 14 21 23 52 78

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
    int i, n, j, key;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}