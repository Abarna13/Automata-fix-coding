/*
Complete the following code to get the desired output.

Input Format

Vikam 15000 Arjun 18900 Harish 17800

Constraints

-

Output Format

Displaying Employee record:

Employee name is Vikam Salary is 15000 Employee name is Arjun Salary is 18900 Employee name is Harish Salary is 17800

Sample Input 0

Vikam
15000
Arjun
18900
Harish
17800
Sample Output 0

Displaying Employee record:

Employee name is Vikam
Salary is 15000
Employee name is Arjun
Salary is 18900
Employee name is Harish
Salary is 17800
Sample Input 1

Jasmine
17800
Sheeba
19600
Lakshmi
25400
Sample Output 1

Displaying Employee record:

Employee name is Jasmine
Salary is 17800
Employee name is Sheeba
Salary is 19600
Employee name is Lakshmi
Salary is 25400

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

struct Employee

{
    char ename[10];
    int sal;

};
    
struct Employee emp[5];

int i, j;

void ask()

{
    for (i=0;i<3;i++)
    {
        scanf("%s",emp[i].ename);
        scanf("%d",&emp[i].sal);
    }
    printf("Displaying Employee record:\n");
        
    for (i=0;i<3;i++)
        
    {
        
        printf("\nEmployee name is %s", emp[i].ename);
        printf("\nSalary is %d", emp[i].sal);

    }
    
}

int main()
    
{

    ask();

    return 0;
    
}