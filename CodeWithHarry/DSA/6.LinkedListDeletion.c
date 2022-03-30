#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *nxt;
}node;

int LinkedListTraversal(node *ptr)
{
    while (ptr!=NULL)
    {
        printf("Node: %d\n", ptr->data);
        ptr = ptr->nxt;
    }
    return 1;
}

node *delAtStart(node *ptr)
{
    node *tmp = NULL;
    tmp = ptr->nxt;
    free(ptr);
    return tmp;
}

node *delAtIndex(node *ptr, int index)
{
    node *head = ptr;
    if (index == 0)
    {
        head = delAtStart(ptr);
        return head;
    }
    node *tmp = NULL;
    int i = 0;
    while (index!=i + 1)
    {
        ptr = ptr->nxt;
        i++;
    }
    tmp = ptr->nxt;
    ptr->nxt = tmp->nxt;
    free(tmp);
    return head;
}

node *delAtLast(node *ptr)
{
    node *head = ptr;
    node *prevptr = NULL;
    while (ptr->nxt!=NULL)
    {
        prevptr = ptr;
        ptr = ptr->nxt;
    }
    prevptr->nxt = NULL;
    free(ptr);
    return head;
}

int main(int argc, char *argv[])
{
    node *head = (node *) malloc(sizeof(node));
    node *n1 = (node *) malloc(sizeof(node));
    node *n2 = (node *) malloc(sizeof(node));
    node *n3 = (node *) malloc(sizeof(node));

    head->data = 7;
    head->nxt = n1;

    n1->data = 14;
    n1->nxt = n2;
    
    n2->data = 21;
    n2->nxt = n3;

    n3->data = 28;
    n3->nxt = NULL;

    LinkedListTraversal(head);
    head = delAtStart(head);
    printf("\n");
    LinkedListTraversal(head);
    head = delAtIndex(head, 2);
    printf("\n");
    LinkedListTraversal(head);
    delAtLast(head);
    printf("\n");
    LinkedListTraversal(head);
    return 0;
}