/*
Write a C program to input elements in array and search whether an element exists in array or not.

Input Format

4 1 2 3 9 3

Constraints

-

Output Format

3 is found at position 2

Sample Input 0

4
1
2
3
9
3
Sample Output 0

3 is found at position 2
Sample Input 1

4
6
9
8
1
9
Sample Output 1

9 is found at position 1
Sample Input 2

2
25
166
705
Sample Output 2

705 is not found in the array

*/

#include <stdio.h>
#define MAX_SIZE 100 
int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, found;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &toSearch);
    found = 0;
    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("%d is found at position %d", toSearch, i);
    }
    else
    {
        printf("%d is not found in the array", toSearch);
    }

    return 0;
}