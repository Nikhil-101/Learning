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

void preOrder(node *root){
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(node *root){
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(node *root){
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBST(node *root){
    static node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

node *searchBST(node *root, int key){
    if (root != NULL)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            searchBST(root->left, key);
        }
        else{
            searchBST(root->right, key);
        }
        
    }
    else{
        return NULL;
    }
}

node *searchItr(node *root, int key){
    while (root != NULL)
    {
        printf("%d\n", root->data);
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else{
            root = root->right;
        }   
    }
    return NULL;
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

    // printf("PreOrder: \n");
    // preOrder(root);
    // printf("\n");
    // printf("PostOrder: \n");
    // postOrder(root);
    // printf("\n");
    printf("InOrder: \n");
    inOrder(root);
    printf("\n");
    // printf("BST?: %d\n", isBST(root));
    printf("%p\n", searchBST(root, 1));
    printf("%p\n", n2);
    printf("%p\n", searchBST(root, 4));
    printf("Found: %d\n", searchBST(root, 4)->data);
    printf("%p\n", n3);
    // node *n = searchItr(root, 10);
    printf("Found: %p\n", searchItr(root, 10));
    // printf("\n");
    return 0;
}