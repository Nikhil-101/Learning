#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int top;
    char *arr;
}stack;

int isEmpty(stack *ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int traverseStack(stack *ptr){
    int tmp = ptr->top;
    while (tmp >= 0)
    {
        printf("Value: %c\n", ptr->arr[tmp]);
        tmp--;
    }
    return 0;
}

int push(stack *ptr, char c){
    ptr->top++;
    ptr->arr[ptr->top] = c;
    return 1;
}

char pop(stack *ptr){
    if (isEmpty(ptr))
    {
        return 0;
    }
    char tmp = ptr->arr[ptr->top];
    ptr->top--;
    return tmp;
}

int checkPrecedence(char c){
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    return 0;
}

int inToPost(stack *ptr, char *expr, char *r){
    int j = 0;
    for (int i = 0; expr[i]; i++)
    {
        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/')
        {
            if (isEmpty(ptr))
            {
                push(ptr, expr[i]);
            }
            else{
                while(checkPrecedence(ptr->arr[ptr->top]) >= checkPrecedence(expr[i]))
                {
                    r[j] = pop(ptr);
                    j++;
                }
                push(ptr, expr[i]);
            }
        }
        else{
            r[j] = expr[i];
            j++;
        }
    }
    while (!isEmpty(ptr))
    {
        r[j] = pop(ptr);
        j++;
    }
    r[j] = '\0';
    return 1;
}

int main()
{
    char *expr = "q+p*b/m-n";
    stack *s = (stack *) malloc(sizeof(stack));
    char *result = (char *) malloc(sizeof(expr));
    s->top = -1;
    s->arr = (char *) malloc(sizeof(char) * sizeof(expr));
    inToPost(s, expr, result);
    printf("String: %s\n", result);
    free(s);
    free(result);
    return 0;
}