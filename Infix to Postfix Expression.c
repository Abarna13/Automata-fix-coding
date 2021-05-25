/*
Complete the given code to convert the given infix expression into postfix expression using stack.

Input Format

a+b*(c^d-e)^(f+g*h)-i

Constraints

-

Output Format

abcd^e-fgh*+^*+i-

Sample Input 0

a+b*(c^d-e)^(f+g*h)-i 
Sample Output 0

abcd^e-fgh*+^*+i-
Sample Input 1

a+b*(c-d)
Sample Output 1

abcd-*+

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
    #define SIZE 50
    char stack[SIZE];
    int top=-1;
    void push(char elem)
    {
        stack[++top]=elem;
    }
    char pop()
    {
        return(stack[top--]);
    }
    int pr(char symbol)
    {
        if(symbol == '^')
        {
            return(3);
        }
        else if(symbol == '*' || symbol == '/')
        {
            return(2);
        }
        else if(symbol == '+' || symbol == '-')
        {
            return(1);
        }
        else
        {
            return(0);
        }
    }
    char infix[50],postfix[50],ch,elem;
    int i=0,k=0;
    scanf("%s",infix);
    push('#');
    while( (ch=infix[i++]) != '\0')
    {
        if( ch == '(') push(ch);
        else
        if(isalnum(ch)) postfix[k++]=ch;
        else
        if( ch == ')')
        {
            while( stack[top] != '(')
            postfix[k++]=pop();
            elem=pop();
        }
        else
        {
            while( pr(stack[top]) >= pr(ch) )
            postfix[k++]=pop();
            push(ch);
        }
    }
    while( stack[top] != '#')
    postfix[k++]=pop();
    postfix[k]='\0';
    printf("%s ",postfix);
    return 0;
}