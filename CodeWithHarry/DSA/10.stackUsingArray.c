#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int size;
    int top;
    int *arr;
}stack;

int isEmpty(stack *ptr)
{
    if (ptr->top < 0)
    {
        return 1;
    }
    return 0;
}

int isFull(stack *ptr)
{
    if (ptr->top >= ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

int traverseStack(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow!!!\n");
        return 0;
    }
    int tmp = ptr->top;
    while (tmp >= 0)
    {
        printf("Value: %d\n", ptr->arr[tmp]);
        tmp--;
    }
    return 1;
}

int push(stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow!!! for value %d\n", value);
        return 0;
    }
    printf("Pushed: %d\n", value);
    ptr->arr[ptr->top + 1] = value;
    ptr->top++;
    return 1;
}

int pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow!!!\n");
        return 0;
    }
    int tmp = ptr->arr[ptr->top];
    ptr->top--;
    return tmp;
}

int peek(stack *ptr, int index)
{
    int cIndex = ptr->top - index + 1;
    if (cIndex < 0)
    {
        printf("Peek: Out of Range!!!\n");
        return 0;
    }
    printf("Peek: %d\n", ptr->arr[cIndex]);
    return ptr->arr[cIndex];
}

int stackTop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("StackTop: Stack Underflow!!!\n");
        return 0;
    }
    printf("Top: %d\n", ptr->arr[ptr->top]);
    return ptr->arr[ptr->top];
}

int stackBottom(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("StackBottom: Stack Underflow!!!\n");
        return 0;
    }
    printf("Bottom: %d\n", ptr->arr[0]);
    return ptr->arr[0];
}

int main()
{
    stack *s = (stack *) malloc(sizeof(stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *) malloc(sizeof(s->size * sizeof(int)));
    printf("%d\n", isEmpty(s));
    printf("%d\n", isFull(s));
    push(s, 21);
    push(s, 22);
    push(s, 100);
    push(s, 101);
    push(s, 102);
    push(s, 103);
    printf("Poped: %d\n", pop(s));
    printf("Poped: %d\n", pop(s));
    traverseStack(s);
    peek(s, 4);
    stackBottom(s);
    stackTop(s);

    return 0;
}