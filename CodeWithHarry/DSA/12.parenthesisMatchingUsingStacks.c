#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int top;
    char *arr;
}stack;

int isEmpty(stack *ptr){
    if (ptr->top < 0)
    {
        return 1;
    }
    return 0;
}

int isFull(stack *ptr){
    if (ptr->top == sizeof(ptr->arr) - 1)
    {
        return 1;
    }
    return 0;
}

int push(stack *ptr, char value){
    if (isFull(ptr))
    {
        printf("PUSH: Stack Overflow\n");
        return 0;
    }
    ptr->top++;
    ptr->arr[ptr->top] = value;
    return 1;
}

int pop(stack *ptr){
    if (isEmpty(ptr))
    {
        return 0;
    }
    // printf("POP: %d\n", ptr->arr[ptr->top]);
    ptr->top--;
    return 1;
}

int traversalStack(stack *ptr){
    if (isEmpty(ptr))
    {
        return 0;
    }
    int tmp = ptr->top;
    while (tmp >= 0)
    {
        printf("Value: %c\n", ptr->arr[tmp]);
        tmp--;
    }
    return 1;
}

int main()
{
    int i = 0;
    char expr[] = "()()()()";
    stack *s = (stack *) malloc(sizeof(stack));
    s->top = -1;
    s->arr = (char *) malloc(sizeof(char) * sizeof(expr));
    while (expr[i] != '\0')
    {
        if (expr[i] == '(')
        {
            push(s, expr[i]);
        }
        else if (expr[i] == ')')
        {
            if (pop(s) == 0)
            {
                printf("Imbalance: Stack Underflow\n");
                push(s, expr[i]);
                break;
            }
            else{
                printf("POP index: %d\n", i);
                printf("POP: %c\n", expr[i]);
            }
        }
        printf("For index: %d\n", i);
        traversalStack(s);
        i++;
    }
    printf("After ops: \n");
    traversalStack(s);
    if (!isEmpty(s))
    {
        printf("Imbalance: Stack Not Empty\n");
    }
    else{
        printf("Balanced\n");
    }
    
    
    return 0;
}