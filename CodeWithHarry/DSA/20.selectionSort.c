#include <stdio.h>

int swap(int *m, int *n){
    int tmp = *n;
    *n = *m;
    *m = tmp;
    return 1;
}

int traverse(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 1;
}

int selectionSorting(int *arr, int size){
    int min, j;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)          // try j = i + 1
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min == i)
        {
            continue;
        }
        swap(&arr[i], &arr[min]);
        traverse(arr, size);
    }
    return 1;
}

int main()
{
    int arr[] = {5, 2, 100, 77, 31, 3, 33};    
    int size = sizeof(arr)/sizeof(int);
    // traverse(arr, size);
    selectionSorting(arr, size);
    // traverse(arr, size);

    return 0;
}