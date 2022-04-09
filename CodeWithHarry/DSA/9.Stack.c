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
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    stack *s = (stack *) malloc(sizeof(stack));;
    s->size = 10;
    s->top = -1;
    s->arr = (int *) malloc(sizeof(int) * s->size);
    if (isEmpty(s))
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack is not Empty\n");
    }
}
