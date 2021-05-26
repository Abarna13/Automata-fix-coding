/*
Complete the following code to perform enqueue and dequeue operation in the Queue data structure.

Input Format

-

Constraints

-

Output Format

10 enqueued to queue 20 enqueued to queue 30 enqueued to queue 40 enqueued to queue 10 dequeued from queue

Front item is 20 Rear item is 40

Sample Output 0

10 enqueued to queue
20 enqueued to queue
30 enqueued to queue
40 enqueued to queue
10 dequeued from queue

Front item is 20
Rear item is 40

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
    struct Queue
    {
        int front, rear, size;
        unsigned capacity;
        int* array;
    };
    
    struct Queue* createQueue(unsigned capacity)
    {
        struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
        queue->capacity = capacity;
        queue->front = queue->size = 0;
        queue->rear = capacity - 1;
        queue->array = (int*)malloc(queue->capacity * sizeof(int));
        return queue;

    }

    int isFull(struct Queue* queue)
    {
        return (queue->size == queue->capacity);
    }

    int isEmpty(struct Queue* queue)
    {
        return (queue->size == 0);
    }

    void enqueue(struct Queue* queue, int item)
    {
        if (isFull(queue))
        return;
        queue->rear = (queue->rear + 1) % queue->capacity;
        queue->array[queue->rear] = item;
        queue->size = queue->size + 1;
        printf("%d enqueued to queue\n", item);
    }

    int dequeue(struct Queue* queue)
    {
        if (isEmpty(queue))
        return INT_MIN;
        int item = queue->array[queue->front];
        queue->front = (queue->front + 1) % queue->capacity;
        queue->size = queue->size - 1;
        return item;
    }

    int front(struct Queue* queue)
    {
        if (isEmpty(queue))
        return INT_MIN;
        return queue->array[queue->front];
    }

    int rear(struct Queue* queue)
    {
        if (isEmpty(queue))
        return INT_MIN;
        return queue->array[queue->rear];
    }

    struct Queue* queue = createQueue(1000);
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    printf("%d dequeued from queue\n",dequeue(queue));
    printf("\nFront item is %d", front(queue));
    printf("\nRear item is %d", rear(queue));
    return 0;
    
}