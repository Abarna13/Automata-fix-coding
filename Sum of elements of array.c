/*
Write a program in C to find the sum of all elements of an array.

Input Format

5 1 2 3 4 5

Constraints

-

Output Format

15

Sample Input 0

5
1 2 3 4 5
Sample Output 0

15
Sample Input 1

5
10 20 30 40 50
Sample Output 1

150

*/




#include <stdio.h>
int main()
{
    int a[100];
    int i, n, sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    printf("%d\n\n", sum);
}
