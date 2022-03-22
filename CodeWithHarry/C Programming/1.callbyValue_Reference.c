#include <stdio.h>

void process(int *n, int *m)
{
    int sum = *n + *m;
    *m = *n - *m;
    *n = sum;
}

int main()
{
    int a = 20, b = 10;
    process(&a, &b);
    printf("Value of a(sum) & b(subtract) are %d & %d respectively\n", a, b);
    return 0;
}