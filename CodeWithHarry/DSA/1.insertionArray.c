#include <stdio.h>

void traversal(int *arr, int size)
{
    printf("Traversal: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int iInsertion(int arr[], int capacity, int *uSize, int index, int element)
{
    if (index >= capacity)
    {
        return -1;
    }
    // printf("Size: %d\n", *uSize);
    // if (index >= *uSize)
    // { 
    //     arr[*uSize + 1] = element;
    //     *uSize++;

    // }
    // printf("Size: %d\n", *uSize);


    // for (int i = 0; i < *uSize - index + 1; i++)
    // {
    //     arr[*uSize + 1 - i] = arr[*uSize - i];
    // }
    for (int i = *uSize + 1; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }
    
    // printf("Size: %d\n", *uSize);
    *uSize += 1;
    // printf("Size: %d\n", *uSize);
    arr[index] = element;
    
    
    return 0;
}


int main()
{
    int uSize = 6, index = 4, element = 15;
    int arr[50] = {1, 2, 3, 7, 9, 20};
    traversal(arr, uSize);
    iInsertion(arr, 100, &uSize, index, element);
    traversal(arr, uSize);

    return 0;
}