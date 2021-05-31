/*
Complete the following Program to pass a structure to a function in C.

Input Format

124 saveetha

Constraints

-

Output Format

The name of the student is : saveetha The marks of the student is : 124

Sample Input 0

124
saveetha
Sample Output 0

The name of the student is : saveetha
The marks of the student is : 124
Sample Input 1

121
sabeetha
Sample Output 1

The name of the student is : sabeetha
The marks of the student is : 121

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

struct exam
{
    int marks;
    char name[20];

};

void structfun(struct exam obj);

int main()
{
    struct exam obj;
    {
        int marks;
        char name;
        scanf("%d",&obj.marks);
        scanf("%s",obj.name);
        structfun(obj);
        return 0;
    }

}

void structfun(struct exam obj)
{
    printf("The name of the student is : %s",obj.name);
        
    printf("\nThe marks of the student is : %d",obj.marks);
    
}