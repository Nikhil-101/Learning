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

int enqueue(queue *ptr, int value){
    if (isFull(ptr))
    {
        printf("Memory Overflow\n");
        return 0;
    }
    node *newptr = (node *) malloc(sizeof(node));
    newptr->data = value;
    if (isEmpty(ptr))
    {
        ptr->f = newptr;
    }
    else{
        ptr->r->nxt = newptr;
    }
    ptr->r = newptr;
    return 1;
}

int dequeue(queue *ptr){
    if (isEmpty(ptr))
    {
        printf("Dequeue: Queue is Empty\n");
        return 0;
    }
    int tmp_data = ptr->f->data;
    node *tmp_address = ptr->f;
    ptr->f = ptr->f->nxt;
    free(tmp_address);
    if (ptr->f == NULL)
    {
        ptr->r = NULL;
    }
    
    return tmp_data;
}

void traverse(queue *ptr){
    if (isEmpty(ptr))
    {
        printf("Traverse: Queue is Empty\n");
        return;
    }
    
    node* tmp = ptr->f;
    do
    {
        printf("%d   ", tmp->data);
        tmp = tmp->nxt;
    } while (tmp != NULL);
    printf("\n");
}

int main(int argc, char *argv[])
{
    queue *q = (queue *) malloc(sizeof(queue));
    q->f = NULL;
    q->r = NULL;

    traverse(q);

    return 0;
}