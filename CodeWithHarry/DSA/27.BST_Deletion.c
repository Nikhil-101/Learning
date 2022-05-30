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

node *inOrderPredecessor(node *root){
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

node *deleteNode(node *root, int value){
    node *iPre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}

int main()
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
    deleteNode(root, 4);
    inOrder(root);
    printf("\n");

    return 0;
}