#include <stdio.h>

int traverseArray(int arr[], int *uSize, int capacity)
{
    if (*uSize > capacity)
    {
        return 0;
    }
    printf("Array Traversal: \n");
    for (int i = 0; i < *uSize; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 1;
}
// 1 ,2, 3, 4, 5
int deletionArray(int arr[], int *uSize, int index, int capacity)
{
    if (index > *uSize)
    {
        return 0;
    }
    for (int i = index; i < *uSize - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    *uSize -= 1;
    return 1;
}

int main()
{
    int arr[50] = {1, 2, 5, 7, 9, 13};
    int uSize = 6, capacity = 50;
    traverseArray(arr, &uSize, capacity);
    deletionArray(arr, &uSize, 4, 50);
    traverseArray(arr, &uSize, capacity);

    
    return 0;
}