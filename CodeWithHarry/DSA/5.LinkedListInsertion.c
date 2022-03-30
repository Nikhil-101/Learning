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

node *insertAtFirst(node *ptr, int value)
{
    node * newptr = (node *) malloc(sizeof(node));
    newptr->data = value;
    newptr->nxt = ptr;
    return newptr;
}

int insertAtIndex(node *ptr, int value, int index)
{
    int i = 0;
    node * newptr = (node *) malloc(sizeof(node));
    while (ptr!=NULL)
    {
        if (index == i + 1)
        {
            newptr->data = value;
            newptr->nxt = ptr->nxt;
            ptr->nxt = newptr;
            return 1;
        }
        ptr = ptr->nxt;
        i++;
    }
    return 0;
}

int insertAtEnd(node *ptr, int value)
{
    node * newptr = (node *) malloc(sizeof(node));
    while (ptr->nxt!=NULL)
    {
        ptr = ptr->nxt;
    }
    newptr->data = value;
    newptr->nxt = NULL;
    ptr->nxt = newptr;
}

int main(int argc, char *argv[])
{
    node *head = (node *) malloc(sizeof(node));
    node *n1 = (node *) malloc(sizeof(node));
    node *n2 = (node *) malloc(sizeof(node));
    node *n3 = (node *) malloc(sizeof(node));
    // node *n4 = (node *) malloc(sizeof(node));
    // node *n5 = (node *) malloc(sizeof(node));

    head->data = 7;
    head->nxt = n1;

    n1->data = 14;
    n1->nxt = n2;

    n2->data = 21;
    n2->nxt = n3;

    n3->data = 28;
    n3->nxt = NULL;

    LinkedListTraversal(head);
    head = insertAtFirst(head, 6);
    printf("\n");
    LinkedListTraversal(head);
    insertAtIndex(head, 12, 1);
    printf("\n");
    insertAtEnd(head, 100);
    LinkedListTraversal(head);
    
    return 0;
}