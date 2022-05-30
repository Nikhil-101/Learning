#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}node;

int isFull(){
    node *ptr = (node *) malloc(sizeof(node));
    if (ptr == NULL)
    {
        return 1;
    }
    free(ptr);
    return 0;
}

int isEmpty(node *ptr){
    if (ptr == NULL)
    {
        return 1;
    }
    return 0;
}

node *createNode(int value){
    if (isFull())
    {
        printf("Memory Full\n");
        return NULL;
    }
    
    node *ptr = (node *) malloc(sizeof(node));
    ptr->data = value;
    ptr->left = NULL;
    ptr->right = NULL;

    return ptr;
}

int isBST(node *ptr){
    if (ptr == NULL)
    {
        return 1;
    }
    static node *prev = NULL;
    if (!isBST(ptr->left))
    {
        return 0;
    }
    // if (prev != NULL)
    // {
    //     printf("Prev Data: %d\n", prev->data);
    //     printf("Node Data: %d\n", ptr->data);
    //     printf("\n");
    // }
    if (prev != NULL && prev->data >= ptr->data)
    {
        return 0;
    }
    prev = ptr;

    return isBST(ptr->right);
}

// int searchBST(node *ptr, int value){                 Using same logic as isBST() function
//     if (ptr == NULL)                                 // Iterative Search
//     {
//         return 0;
//     }
//     if (searchBST(ptr->left, value))
//     {
//         return 1;
//     }
//     if (ptr->data == value)
//     {
//         printf("Found: %d at %p\n", ptr->data, ptr);
//         return 1;
//     }
//     return searchBST(ptr->right, value);
// }

int searchBST(node *ptr, int value){                    // Recursive Search
    if (ptr == NULL)
    {
        return 0;
    }
    if (value < ptr->data)
    {
        return searchBST(ptr->left, value);
    }
    else if (value > ptr->data)
    {
        return searchBST(ptr->right, value);
    }
    else{
        printf("Found %d at %p\n", ptr->data, ptr);
        return 1;
    }
}

int searchBST_Iterative(node *ptr, int value){
    while (ptr != NULL)
    {
        if (value < ptr->data)
        {
            ptr = ptr->left;
        }
        else if (value > ptr->data)
        {
            ptr = ptr->right;
        }
        else{
            printf("Found %d at %p\n", ptr->data, ptr);
            return 1;
        }
    }
    return 0;
}

void inOrder(node *ptr){
    if (ptr == NULL)
    {
        return;
    }
    inOrder(ptr->left);
    printf("%d   ", ptr->data);
    inOrder(ptr->right);
}

int main(int argc, char *argv[])
{
    node *root = createNode(8);
    node *n1 = createNode(4);
    node *n2 = createNode(2);
    node *n3 = createNode(6);
    node *n4 = createNode(7);
    node *n5 = createNode(5);
    node *n6 = createNode(16);
    node *n7 = createNode(12);
    node *n8 = createNode(10);
    node *n9 = createNode(11);
    node *n10 = createNode(20);
    //     8
    //    /\
    //   4  16
    //  /\   /\
    // 2  6 11 20
    //   /\  /\
    //  5 7 10 12
    root->left = n1;
    root->right = n6;
    n1->left = n2;
    n1->right = n3;
    n3->left = n5;
    n3->right = n4;
    n6->left = n9;
    n6->right = n10;
    n9->left = n8;
    n9->right = n7;

    printf("InOrder Traversal: ");
    inOrder(root);
    printf("\n");
    printf("BST?: %d\n", isBST(root));
    
    printf("Search: \n");
    searchBST(root, 21);
    // printf("MAIN: %p\n", n3);
    printf("Iterative Search: \n");
    searchBST_Iterative(root, 21);
    return 0;
}