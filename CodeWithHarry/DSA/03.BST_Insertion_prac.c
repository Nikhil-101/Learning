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

node *getPrevNode(node *ptr, int value){
    static node *prev = NULL;
    if (ptr == NULL)
    {
        return prev;
    }
    prev = ptr;
    if (value < ptr->data)
    {
        return getPrevNode(ptr->left, value);
    }
    else if (value > ptr->data)
    {
        return getPrevNode(ptr->right, value);
    }
    else{
        printf("Found %d at %p\n", ptr->data, ptr);
        return NULL;
    }
}

int insertion(node *ptr, int value){

    node *new = createNode(value);
    node *prev = getPrevNode(ptr, value);
    if (prev == NULL)
    {
        return 0;
    }
    
    if (value < prev->data)
    {
        prev->left = new;
    }
    else{
        prev->right = new;
    }
    return 1;
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
    if (prev != NULL && prev->data >= ptr->data)
    {
        return 0;
    }
    prev = ptr;

    return isBST(ptr->right);
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
    insertion(root, 9);
    insertion(root, 1);
    insertion(root, 21);
    printf("InOrder Traversal: ");
    inOrder(root);
    printf("\n");

    printf("%d\n", isBST(root));

    return 0;
}