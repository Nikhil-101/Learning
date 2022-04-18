#include <stdio.h>

int traverse(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 1;
}

int insertionSort(int *arr, int size){
    int tmp, j;
    for (int i = 1; i < size; i++)
    {
        j = i - 1;
        tmp = arr[i];
        while (arr[j] > tmp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }
    return 1;
}

int main()
{
    int arr[] = {51, 2, 100, 88, 54, 14};
    int size = sizeof(arr)/sizeof(int);
    traverse(arr, size);
    insertionSort(arr, size);
    printf("After Sorting: \n");
    traverse(arr, size);

    return 0;
}