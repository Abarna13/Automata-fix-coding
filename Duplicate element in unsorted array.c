/*
Write a C program to remove Duplicate Element in a unsorted Array

Input Format

5 8 2 8 2 5

Constraints

-

Output Format

Array Before Removing Duplicates: 8 2 8 2 5 Array After Removing Duplicates: 8 2 5

Sample Input 0

5
8
2
8
2
5
Sample Output 0

Array Before Removing Duplicates: 8 2 8 2 5 
Array After  Removing Duplicates: 8 2 5 
Sample Input 1

5
4
6
9
4
1
Sample Output 1

Array Before Removing Duplicates: 4 6 9 4 1 
Array After  Removing Duplicates: 4 6 9 1 

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Before Removing Duplicates: ");
    for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < count; j++)
        {
            if (arr[i] == temp[j])
            break;
        }
        if (j == count)
        {
            temp[count] = arr[i];
            count++;
        }
    }
    printf("\nArray After  Removing Duplicates: ");
    for (int i = 0; i < count; i++)
    printf("%d ", temp[i]);
    return 0;
}