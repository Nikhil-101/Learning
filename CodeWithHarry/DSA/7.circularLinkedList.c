#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *nxt;
}node;

void LinkedListTraversal(node *head)
{
    node *ptr = head;
    do
    {
        printf("Node: %d\n", ptr->data);
        ptr = ptr->nxt;
    } while (ptr!=head);
}

node *insertAtStart(node *head, int value)
{
    node *newNode = (node *) malloc(sizeof(node));
    node *ptr = head;
    do
    {
        ptr = ptr->nxt;
    } while (ptr->nxt != head);
    
    newNode->data = value;
    newNode->nxt = head;
    ptr->nxt = newNode;

    return newNode;
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
    n3->nxt = head;

    LinkedListTraversal(head);
    head = insertAtStart(head, 10);
    head = insertAtStart(head, 11);
    printf("\n");
    LinkedListTraversal(head);

    return 0;
}