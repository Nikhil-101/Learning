#include<stdio.h>

int fun1(int array[]) 
{
    for (int i = 0; i < sizeof(array[1]); i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    printf("%ld\n", sizeof(array[0]));
    return 0;
}


int main()
{
    int a = 10;
    int arr[] = {1, 2, 3, 4};
    printf("%d\n", a);

    int* b = &a;
    printf("%p\n", b);

    int c = *b;
    printf("%d\n", c);
    printf("Size of array: %ld\n", sizeof(arr)/sizeof(int));
    fun1(arr);

    return 0;
}