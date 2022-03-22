#include <stdio.h>

void arrPrint(int arr[], int size)
{
    // int size = sizeof(arr) / sizeof(int);
    // printf("\nSize of array: %d\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void arrRev(int arr[], int size)
{
    // int size = sizeof(arr) / sizeof(int);
    int midPoint = size/2;
    for (int i = 0; i < midPoint; i++)
    {
        int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
    arrPrint(arr, size);
}


int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    printf("Array before reversal is: ");
    arrPrint(arr, size);
    printf("Array after reversal is: ");
    arrRev(arr, size);

    return 0;
}