#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *nxt;
}node;

typedef struct Stack{
    int top;
    node *head;
}stack;

int isFull(){
    node *ptr = (node *) malloc(sizeof(node));
    if (ptr == NULL){
        return 1;
    }
    free(ptr);
    return 0;
}

int isEmpty(stack *ptr){
    if (ptr->top < 0){
        return 1;
    }
    return 0;
}

int push(stack *ptr, int value){
    if (isFull())
    {
        printf("PUSH: Stack Overflow\n");
        return 0;
    }
    node *newNode = (node *) malloc(sizeof(node));
    newNode->data = value;
    newNode->nxt = ptr->head;
    ptr->head = newNode;
    ptr->top++;
    return 1;
}

int pop(stack *ptr){
    if (isEmpty(ptr))
    {
        printf("POP: Stack Underflow\n");
        return 0;
    }
    printf("POP: %d\n", ptr->head->data);
    node *tmp = ptr->head;
    ptr->top--;
    ptr->head = ptr->head->nxt;
    free(tmp);
    return 1;
}

int peek(stack *ptr, int index){
    if (index > ptr->top)
    {
        printf("Peek: Out of Range Index\n");
        return 0;
    }
    node *tmp = ptr->head;
    int i = 1;
    while (i != index)
    {
        tmp = tmp->nxt;
        i++;
    }
    printf("Peek at index %d: %d\n", index, tmp->data);
    return 1;
}

int traverseStack(stack *ptr){
    if (isEmpty(ptr))
    {
        return 0;
    }
    node *tmp = ptr->head;
    while (tmp != NULL)
    {
        printf("Data: %d\n", tmp->data);
        tmp = tmp->nxt;
    }
    return 1;
}

int main(){
    stack *s1 = (stack *) malloc(sizeof(stack));
    s1->head = NULL;
    s1->top = -1;
    push(s1, 10);
    // traverseStack(s1);
    push(s1, 11);
    // traverseStack(s1);
    push(s1, 15);
    // traverseStack(s1);
    push(s1, 25);
    // traverseStack(s1);
    push(s1, 55);
    push(s1, 105);
    peek(s1, 2 );
    traverseStack(s1);
    printf("%d\n", s1->top);
    pop(s1);
    pop(s1);
    pop(s1);
    pop(s1);
    pop(s1);
    pop(s1);
    pop(s1);
    pop(s1);
    traverseStack(s1);

    return 1;
}