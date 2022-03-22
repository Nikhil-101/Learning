#include <stdio.h>
#include <stdlib.h>


int main()
{
    int* ptr;
    ptr = (int*) malloc(3 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value at %d index: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Value at %d index: %d\n", i, ptr[i]);
    }
    printf("\nSize of array: %ld\n", sizeof(&ptr));

    ptr = (int*) realloc(ptr, 4 * sizeof(int));

    printf("\nSize of array after realloc: %ld\n", sizeof(ptr));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter value at %d index: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Value at %d index: %d\n", i, ptr[i]);
    }

    printf("%ld\n", sizeof(int));

    free(ptr);
    
    return 0;
}