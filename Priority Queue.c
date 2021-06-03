/*
C Program to Implement Priority Queue to Add and Delete Elements

Input Format

1 10 1 20 1 30 2 30 3 4

Constraints

1.INSERT ELEMENT,2.DELETION ELEMENT,3.DISPLAY,4.EXIT.

Output Format

20 10

Sample Input 0

1
10
1
20
1
30
2
30
3
4
Sample Output 0

20 10

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 5
 
void insert_by_priority(int);
void delete_by_priority(int);
void create();
void check(int);
void display_pqueue();
 
int pri_que[MAX];
int front, rear;
 
int main()
{
    int n, ch;
    create();
    while (1)
    {    
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: 
            scanf("%d",&n);
            insert_by_priority(n);
            break;
        case 2:
            scanf("%d",&n);
            delete_by_priority(n);
            break;
        case 3: 
            display_pqueue();
            break;
        case 4: 
            exit(0);
        default: 
            printf("\nChoice is incorrect, Enter a correct choice");
        }
    }
}
void create()
{
    front = rear = -1;
}
void insert_by_priority(int data)
{
    if (rear >= MAX - 1)
    {
        printf("\nQueue overflow no more elements can be inserted");
        return;
    }
    if ((front == -1) && (rear == -1))
    {
        front++;
        rear++;
        pri_que[rear] = data;
        return;
    }    
    else
        check(data);
    rear++;
}
void check(int data)
{
    int i,j;
 
    for (i = 0; i <= rear; i++)
    {
        if (data >= pri_que[i])
        {
            for (j = rear + 1; j > i; j--)
            {
                pri_que[j] = pri_que[j - 1];
            }
            pri_que[i] = data;
            return;
        }
    }
    pri_que[i] = data;
}
void delete_by_priority(int data)
{
    int i;
 
    if ((front==-1) && (rear==-1))
    {
        printf("\nQueue is empty no elements to delete");
        return;
    }
 
    for (i = 0; i <= rear; i++)
    {
        if (data == pri_que[i])
        {
            for (; i < rear; i++)
            {
                pri_que[i] = pri_que[i + 1];
            }
 
        pri_que[i] = -99;
        rear--;
 
        if (rear == -1) 
            front = -1;
        return;
        }
    }
    printf("\n%d not found in queue to delete", data);
}
 

void display_pqueue()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
        return;
    }
 
    for (; front <= rear; front++)
    {
        printf("%d ", pri_que[front]);
    }
 
    front = 0;
}