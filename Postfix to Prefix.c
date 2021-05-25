/*
Complete the following C program to convert the given expression from postfix to prefix.

Input Format

ab+c*b

Constraints

-

Output Format

Prefix Expression :: *+abc

Sample Input 0

ab+c*b
Sample Output 0

Prefix Expression :: *+abc
Sample Input 1

AB+C+D+

Sample Output 1

Prefix Expression :: +++ABCD

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
#define BLANK ' '
#define TAB '\t'
#define MAX 50

char *pop();
char postfix[MAX];
char stack[MAX][MAX];
void push(char *str);
int isempty();
int white_space(char symbol);
void postfix_to_prefix();
int top;

int main()
{
    top = -1;
    gets(postfix);
    postfix_to_prefix();
    return 0;
}

void postfix_to_prefix()
{
    unsigned int i;
    char operand1[MAX], operand2[MAX];
    char symbol;
    char temp[2];
    char strin[MAX];
    for(i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        temp[0]=symbol;
        temp[1]='\0';
        if(!white_space(symbol))
        {
            switch(symbol)
            {
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case '^':
                strcpy(operand1,pop());
                strcpy(operand2,pop());
                strcpy(strin,temp);
                strcat(strin,operand2);
                strcat(strin,operand1);
                push(strin);
                break;
                default:
                push(temp);
            }
        }
    }
    printf("Prefix Expression :: ");
    puts(stack[0]);
}

void push(char *str)
{
    if(top > MAX)
    {
        printf("\nStack overflow\n");
        exit(1);
    }
    else
    {
        top=top+1;
        strcpy( stack[top], str);
    }
}

char *pop()
{
    if(top == -1 )
    {
        printf("\nStack underflow \n");
        exit(2);
    }
    else
    return (stack[top--]);
} 

int isempty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}

int white_space(char symbol)
{
    if( symbol == BLANK || symbol == TAB || symbol == '\0')
    return 1;
    else
    return 0;
}