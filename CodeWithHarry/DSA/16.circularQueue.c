#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
}queue;

int isEmpty(queue *ptr){
    if (ptr->f == ptr->r)
    {
        printf("Queue Underload\n");
        return 1;
    }
    return 0;
}

int isFull(queue *ptr){
    if (ptr->f == (ptr->r + 1)%ptr->size)
    {
        printf("Queue Overload\n");
        return 1;
    }
    return 0;
}

int enqueue(queue *ptr, int value){
    if (isFull(ptr))
    {
        return 0;
    }
    ptr->r = (ptr->r + 1)%ptr->size;
    // printf("Rear: %d\n", ptr->r);
    ptr->arr[ptr->r] = value;
    return 1;
}

int dequeue(queue *ptr){
    if (isEmpty(ptr))
    {
        return 0;
    }
    ptr->f = (ptr->f + 1)%ptr->size;
    return ptr->arr[ptr->f];
}

int traverseQueue(queue *ptr){
    if (isEmpty(ptr))
    {
        return 0;
    }
    for (int i = (ptr->f + 1)%ptr->size; i != (ptr->r + 1)%ptr->size; i = (i + 1)%ptr->size)
    {
        printf("Value: %d\n", ptr->arr[i]);
        printf("i: %d\n", i);
    }
    return 1;
}

int main()
{
    queue *q = (queue *) malloc(sizeof(queue));
    q->size = 6;
    q->f =  q->r = 0;
    q->arr = (int *) malloc(sizeof(int) * q->size);
    enqueue(q, 10);
    enqueue(q, 10);
    enqueue(q, 10);
    enqueue(q, 10);
    enqueue(q, 10);
    // enqueue(q, 10);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    // dequeue(q);
    enqueue(q, 10);
    enqueue(q, 10);
    enqueue(q, 10);
    enqueue(q, 10);
    dequeue(q);
    // enqueue(q, 10);
    enqueue(q, 10);
    enqueue(q, 10);
    // enqueue(q, 10);
    // enqueue(q, 10);
    // enqueue(q, 10);
    printf("Traverse: %d\n", traverseQueue(q));

    return 0;
}