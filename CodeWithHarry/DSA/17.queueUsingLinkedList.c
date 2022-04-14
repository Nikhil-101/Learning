#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *nxt;
}node;

typedef struct Queue
{
    node *f;
    node *r;
}queue;

int isFull(){
    node *ptr = (node *) malloc(sizeof(node));
    if (ptr == NULL)
    {
        return 1;
    }
    free(ptr);
    return 0;
}

int isEmpty(queue *ptr){
    if (ptr->f == NULL)
    {
        return 1;
    }
    return 0;
}

node *enqueue(queue *q, int value){
    // queue *tmp = q->f;
    if (isFull())
    {
        printf("Overflow!!!\n");
        return 0;
    }
    node *nptr = (node *) malloc(sizeof(node));
    nptr->data = value;
    nptr->nxt = NULL;
    if (isEmpty(q))
    {
        q->f = q->r = nptr;
    }
    if (!isEmpty(q))
    {
        q->r->nxt = nptr;
    }
    q->r = nptr;
    printf("Inserted: %d\n", q->r->data);
    return nptr;
}

int dequeue(queue *ptr){
    if (isEmpty(ptr))
    {
        printf("Underflow!!!\n");
        return 0;
    }
    node *tmp = ptr->f;
    ptr->f = ptr->f->nxt;
    printf("Removed: %d\n", tmp->data);
    free(tmp);
    return 1;
}

int traverse(queue *q){
    if (isEmpty(q))
    {
        printf("Queue is Empty!!!\n");
        return 0;
    }
    printf("Traverse\n");
    node *ptr = q->f;
    while (ptr)
    {
        printf("Value: %d\n", ptr->data);
        ptr = ptr->nxt;
    }
    return 1;
}

int main()
{
    queue *q = (queue *) malloc(sizeof(queue));
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    dequeue(q);
    enqueue(q, 60);
    dequeue(q);
    enqueue(q, 70);
    enqueue(q, 80);
    enqueue(q, 90);
    enqueue(q, 100);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    traverse(q);

    return 0;
}