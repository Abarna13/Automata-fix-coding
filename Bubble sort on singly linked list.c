/*
Complete the following C program to implement Bubble Sort on singly linked list.

Input Format

5 21 10 19 30 27

Constraints

-

Output Format

Linked list before sorting 27 30 19 10 21 Linked list after sorting 10 19 21 27 30

Sample Input 0

5
21
10
19
30
27
Sample Output 0

 Linked list before sorting 
27 30 19 10 21 
 Linked list after sorting 
10 19 21 27 30
Sample Input 1

7
21
10
42
51
13
5
65
Sample Output 1

 Linked list before sorting
65 5 13 51 42 10 21 
 Linked list after sorting 
5 10 13 21 42 51 65 

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


struct Node

{

    int data;

    struct Node *next;

};

void insertAtTheBegin(struct Node **start_ref, int data);

void bubbleSort(struct Node *start);

void swap(struct Node *a, struct Node *b);

void printList(struct Node *start);

int main()
   
{

    int n;

    scanf("%d",&n);

    int arr[n];

    int i;

    for(int i=0;i<n;i++)

    {
        scanf("%d",&arr[i]);

    }

    struct Node *start = NULL;

    for (i = 0; i< n; i++)

    insertAtTheBegin(&start, arr[i]);

    printf(" Linked list before sorting ");

    printList(start);

    bubbleSort(start);

    printf("\n Linked list after sorting ");

    printList(start);

    return 0;
}

void insertAtTheBegin(struct Node **start_ref, int data)

{

    struct Node *ptr1 = (struct Node*)malloc(sizeof(struct Node));

    ptr1->data = data;

    ptr1->next = *start_ref;

    *start_ref = ptr1;

}

void printList(struct Node *start)

{

    struct Node *temp = start;

    printf("\n");

    while (temp!=NULL)

    {
        printf("%d ", temp->data);
        
        temp = temp->next;

    }

}

    

void bubbleSort(struct Node *start)

{

    int swapped;
       
    struct Node *ptr1;
       
    struct Node *lptr = NULL;
 
    if (start == NULL)
       
        return;
 
    do
       
    {
       
        swapped = 0;
       
        ptr1 = start;
 
        while (ptr1->next != lptr)
           
        {
           
            if (ptr1->data > ptr1->next->data)
               
            {
               
                swap(ptr1, ptr1->next);
               
                swapped = 1;
               
            }
           
            ptr1 = ptr1->next;
           
        }
       
        lptr = ptr1;
       
    }
       
    while (swapped);

}

void swap(struct Node *a, struct Node *b)

{

    int temp = a->data;

    a->data = b->data;

    b->data = temp;

}

