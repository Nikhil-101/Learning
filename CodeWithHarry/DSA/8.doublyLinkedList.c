#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *nxt;
    struct Node *prev;
}node;

void LinkedListTraversal(node *head)
{
    node *ptr = head;

    printf("Forward Traversal: \n");
    printf("Node: %d\n", ptr->data);
    while (ptr->nxt!=NULL)
    {
        ptr = ptr->nxt;
        printf("Node: %d\n", ptr->data);
    }

    printf("Backward Traversal: \n");
    printf("Node: %d\n", ptr->data);
    while (ptr->prev!=NULL)
    {
        ptr = ptr->prev;
        printf("Node: %d\n", ptr->data);
    }
}

int main(int argc, char *argv[])
{
    node *head = (node *) malloc(sizeof(node));
    node *n1 = (node *) malloc(sizeof(node));
    node *n2 = (node *) malloc(sizeof(node));
    node *n3 = (node *) malloc(sizeof(node));

    head->data = 7;
    head->prev = NULL;
    head->nxt = n1;

    n1->data = 14;
    n1->prev = head;
    n1->nxt = n2;

    n2->data = 21;
    n2->prev = n1;
    n2->nxt = n3;

    n3->data = 28;
    n3->prev = n2;
    n3->nxt = NULL;

    LinkedListTraversal(head);

    return 0;
}