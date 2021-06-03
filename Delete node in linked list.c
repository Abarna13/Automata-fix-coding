/*
Complete the following C code to delete a node in the linked list.

Input Format

-

Constraints

-

Output Format

Created Linked List: 2 3 1 7 Linked List after Deletion of 1: 2 3 7

Sample Output 0

Created Linked List: 
 2  3  1  7 
Linked List after Deletion of 1: 
 2  3  7 

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

    struct Node* next;

};

void push(struct Node** head_ref, int new_data)

{

    struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;

}

void deleteNode(struct Node** head_ref, int key)

{

    struct Node *temp = *head_ref, *prev;
 
    if (temp != NULL && temp->data == key) 
        
    {
        
        *head_ref = temp->next; 
        
        free(temp); 
        
        return;
    }
 
    while (temp != NULL && temp->data != key) 
        
    {
        
        prev = temp;
        
        temp = temp->next;
        
    }
 
    if (temp == NULL)
        
        return;
 
    prev->next = temp->next;
 
    free(temp); 

}

void printList(struct Node* node)

{

    while (node != NULL) 
        
    {

        printf(" %d ", node->data);

        node = node->next;

    }

}

int main()
    
{

    struct Node* head = NULL;

    push(&head, 7);

    push(&head, 1);

    push(&head, 3);

    push(&head, 2);

    puts("Created Linked List: ");

    printList(head);

    deleteNode(&head, 1);

    puts("\nLinked List after Deletion of 1: ");

    printList(head);

    return 0;
}

