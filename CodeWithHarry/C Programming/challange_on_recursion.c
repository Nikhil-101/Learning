#include <stdio.h>

int fibonacci_recursive(int n)
{
    if (n == 0)
    {
        printf("CANNOT BE ZERO!!!\n");
        return 0;
    }
    
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int fibonacci_iterative(int n)
{
    int first = 0, second = 1, result;
    if (n == 0)
    {
        printf("CANNOT BE ZERO!!!\n");
        return 0;
    }

    n = n - 2;
    for (int i = 0; i < n; i++)
    {
        second = first + second;
        first = second - first;
    }
     
    return result;
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Sum of fibonacci series with %d using recursive is %d\n", num, fibonacci_recursive(num));
    printf("Sum of fibonacci series with %d using iterative is %d\n", num, fibonacci_iterative(num));
    
    return 0;
}