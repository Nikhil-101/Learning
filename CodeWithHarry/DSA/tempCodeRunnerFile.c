#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *nxt;
}node;

void LinkedListTraversal(node *head)
{
    while (head!=head)
    {
        printf("Node: %d\n", head->data);
        head = head->nxt;
    }
}