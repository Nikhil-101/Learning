#include <stdio.h>

void traverse(int *arr, int size){
    printf("Traverse: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d   ", arr[i]);
    }
    printf("\n");
}

void swap(int *m, int *n){
    int tmp = *m;
    *m = *n;
    *n = tmp;
}

int partition(int *arr, int low, int high){
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (pivot >= arr[i])
        {
            i++;
        }
        while (pivot < arr[j])
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    } while (i < j);

    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(int *arr, int low, int high){
    int indexAtPartition;

    if (low < high)
    {
        indexAtPartition = partition(arr, low, high);
        traverse(arr, 6);
        quickSort(arr, low, indexAtPartition - 1);
        quickSort(arr, indexAtPartition + 1, high);
    }
}

int main()
{
    int arr[] = {6, 3, 5, 9, 1, 2};
    int size = sizeof(arr)/sizeof(int);
    traverse(arr, size);
    quickSort(arr, 0, size - 1);
    traverse(arr, size);

    return 0;
}