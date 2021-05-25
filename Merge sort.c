/*
Complete the following code to sort the given array using merge sort.

Input Format

6 125 181 130 25 61 887

Constraints

-

Output Format

Sorted array is 25 61 125 130 181 887

Sample Input 0

6
125
181
130
25
61
887
Sample Output 0

Sorted array is 
25 61 125 130 181 887
Sample Input 1

5
25
46
1
325
65
Sample Output 1

Sorted array is 
1 25 46 65 325 

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
    void merge(int arr[], int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;
        int L[n1], R[n2];
        for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
        int i = 0;
        int j = 0;
        int k = l;
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}
void mergeSort(int arra[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arra, l, m);
        mergeSort(arra, m+1, r);
        merge(arra, l, m, r);

    }
}

void print_array(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
    printf("%d ", A[i]);
    printf(" ");
}

int n;
scanf("%d", &n);
int arra[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arra[i]);
}
mergeSort(arra, 0, n-1);
printf("Sorted array is\n");
print_array(arra,n);
return 0;
}
