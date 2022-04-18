#include <stdio.h>

void traverse(int *arr, int size){
    printf("Traverse: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d   ", arr[i]);
    }
    printf("\n");
}

void merge(int *arr, int low, int mid, int high){
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    int tmp[high - low + 1];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            tmp[k] = arr[i];
            i++;
            k++;
        }
        else{
            tmp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        tmp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        tmp[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = tmp[i];
    }
    
}

void mergeSort(int *arr, int low, int high){
    if (low < high)
    {
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    
    merge(arr, low, mid, high);
    }
    
}

int main()
{
    int arr[] = {6, 3, 5, 9, 1, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    traverse(arr, size);
    mergeSort(arr, 0, size);
    traverse(arr, size);

    return 0;
}