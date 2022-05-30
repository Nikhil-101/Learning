#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}node;

node *createNode(int data){
    node *n = (node *) malloc(sizeof(node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inOrder(node *root){
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void insert(node *root, int value){
    node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (value == root->data)
        {
            return;
        }
        else if (value < root->data)
        {
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    node *new = createNode(10);
    new->data = value;
    if (value < prev->data)
    {
        prev->left = new;
    }
    else{
        prev->right = new;
    }
}

int main(int argc, char *argv[])
{
    node *root = createNode(5);
    node *n1 = createNode(3);
    node *n2 = createNode(1);
    node *n3 = createNode(4);
    node *n4 = createNode(6);
//     5
//    /\
//   3  6
//  / \
// 1  4


    root->left = n1;
    root->right = n4;

    n1->left = n2;
    n1->right = n3;
    inOrder(root);
    printf("\n");
    insert(root, 10);
    insert(root, 2);
    // printf("\n");
    inOrder(root);
    printf("\n");

    return 0;
}