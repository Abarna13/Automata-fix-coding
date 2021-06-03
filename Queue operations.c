/*
write a program to create a Queue and implement Queue operations using arrays?

Input Format

-

Constraints

During element insertion in queue should not be overflow. During element deletion from queue should not be underflow.

Output Format

-

Sample Input 0

5
56
78
89
90
91
Sample Output 0

Queue elements are:56 78 89 90 91 
Dequeue Element is:56
Queue elements are:78 89 90 91
Sample Input 1

7
400
800
900
-1000
200
300
400
Sample Output 1

Queue elements are:400 800 900 -1000 200 300 400 
Dequeue Element is:400
Queue elements are:800 900 -1000 200 300 400
Sample Input 2

11
Sample Output 2

No.of.Elements is Higher than size of the Queue

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




#define SIZE 10



    void enQueue();

    void deQueue();

    void display();

    int queue[SIZE], front = 0, rear = -1, n1;

    void enQueue(){

    if(rear == SIZE-1)
        
        printf("Queue is Full!!! Insertion is not possible!!!");
     

    else
    
    {
        int value;
        
        scanf("%d",&value);
        
        if(front == -1)
            
            front = 0;
        
        rear++;
        
        queue[rear] = value;
    
    }
    
    }

     void deQueue()
     
     {
         if(front == rear)
             
             printf("Queue is Empty!!! Deletion is not possible!!!");
         
         else
         
         {
             
             printf("\nDequeue Element is:%d\n", queue[front]);
             
             front++;
             
             if(front == rear)
                 
                 front = rear = -1;
         
         }
     }

void display()

{
    if(rear == -1)
        
        printf("Queue is Empty!!!");
    
    else
    {
        
        int i;
        
        printf("Queue elements are:");
        
        for(i=front; i<=rear; i++)
            
            printf("%d ",queue[i]);

     }
}

int main()

{
    int n1;

    scanf("%d",&n1);
    
    if(n1>10)
        
        printf("No.of.Elements is Higher than size of the Queue");
    
    else
    
    {
        
        int i;
        
        for(i=0;i<n1;i++)
        
        {
            
            enQueue();
        }
        
        display();
        
        deQueue();
        
        display();
    
    }
    
    return 0;
}