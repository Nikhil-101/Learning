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
        return 1;
    }
    return 0;
}

int isFull(queue *ptr){
    if (ptr->r == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

int firstVal(queue *ptr){
    if (isEmpty(ptr))
    {
        return 0;
    }
    return ptr->arr[ptr->f + 1];
}

int lastVal(queue *ptr){
    if (isEmpty(ptr))
    {
        return 0;
    }
    return ptr->arr[ptr->r];
}

int enqueue(queue *ptr, int value){
    if (isFull(ptr))
    {
        printf("Queue Overflow\n");
        return 0;
    }
    ptr->r++;
    ptr->arr[ptr->r] = value;
    return 1;
}

int dequeue(queue *ptr){
    if (isEmpty(ptr))
    {
        printf("Queue Underflow\n");
        return 0;
    }
    ptr->f++;
    return ptr->arr[ptr->f];
}

int peek(queue *ptr, int i){
    if (isEmpty(ptr) || (ptr->f + i) > ptr->r || i == 0)
    {
        return 0;
    }
    return ptr->arr[ptr->f + i];
}

int traverse(queue *ptr){
    if (isEmpty(ptr))
    {
        return 0;
    }
    int i = ptr->f + 1;
    while (i != ptr->r + 1)
    {
        // printf("Value: %d\n", peek(ptr, i));
        printf("Value: %d\n", ptr->arr[i]);
        i++;
    }
    return 1;
}

int main()
{
    queue *q = (queue *) malloc(sizeof(queue));
    q->f = -1;
    q->r = -1;
    q->size = 5;
    q->arr = (int *) malloc(sizeof(int) * q->size);
    

    free(q);
    free(q->arr);

    return 0;
}