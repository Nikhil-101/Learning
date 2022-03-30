#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *nxt;
}node;

void LinkedListTraversal(node *ptr)
{
    while (ptr != NULL)
    {
        printf("Node Data: %d\n", ptr->data);
        ptr = ptr->nxt;
    }
    
}

// int LinkedListInsertion(node *ptr, node *newptr,int element, int index)
// {
//     int i = 0;
//     node *tmp;
//     while (ptr!=NULL)
//     {
//         if (i == 0 && index == 0)
//         {
//             newptr->data = element;
//             newptr->nxt = ptr;
//             ptr = newptr;
//             // return newptr;
//         }
//         else if (i == index - 1)
//         {
//             newptr->data = element;
//             newptr->nxt = ptr->nxt;
//             ptr->nxt = newptr;
//         }
//         ptr = ptr->nxt;
//         i++;
//     }
//     return 0;
    
// }

int main()
{
    node *head = (node *) malloc(sizeof(node));
    node *second = (node *) malloc(sizeof(node));
    node *third = (node *) malloc(sizeof(node));
    node *forth = (node *) malloc(sizeof(node));

    head->data = 67;
    head->nxt = second;

    second->data = 92;
    second->nxt = third;

    third->data = 21;
    third->nxt = NULL;

    LinkedListTraversal(head);
    LinkedListInsertion(head, forth, 50, 4);
    LinkedListTraversal(head);

    return 0;
}