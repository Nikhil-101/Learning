#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int top;
    char *arr;
}stack;

int traversalStack(stack *ptr){
    int tmp = ptr->top;
    while (tmp >= 0)
    {
        printf("Value: %c\n", ptr->arr[tmp]);
        tmp--;
    }
    return 1;
}

int isEmpty(stack *ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int push(stack *ptr, int value){
    ptr->top++;
    ptr->arr[ptr->top] = value;
    return 1;
}

int pop(stack *ptr){
    if (isEmpty(ptr))
    {
        return 0;
    }
    ptr->top--;
    return 1;
}

int checkParenthesis(stack *ptr, char* arr){
    for (int i = 0; arr[i]; i++)
    {
        if (arr[i] == '(' || arr[i] == '{' || arr[i] == '[')
        {
            push(ptr, arr[i]);
        }
        else if (arr[i] == ')')
        {
            if (ptr->arr[ptr->top] == '(')
            {
                pop(ptr);
            }
            else{
                return 0;
            }
        }
        else if (arr[i] == '}')
        {
            if (ptr->arr[ptr->top] == '{')
            {
                pop(ptr);
            }
            else{
                return 0;
            }
        }
        else if (arr[i] == ']')
        {
            if (ptr->arr[ptr->top] == '[')
            {
                pop(ptr);
            }
            else{
                return 0;
            }
        }
    }
    if (isEmpty(ptr))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char *exp = "{3+2}-{(4*2)}";
    stack *s = (stack *) malloc(sizeof(stack));
    s->top = -1;
    s->arr = (char *) malloc(sizeof(char) * sizeof(exp));
    if (checkParenthesis(s, exp))
    {
        printf("Balanced\n");
    }
    else
    {
        printf("Imbalance\n");
    }
    return 0;
}