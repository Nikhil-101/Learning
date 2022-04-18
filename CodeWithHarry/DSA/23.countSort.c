#include <stdio.h>

void traverse(int *arr, int size){
    printf("Traverse: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d   ", arr[i]);
    }
    printf("\n");
}

int highestValue(int *arr, int size){
    int tmp = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (tmp < arr[i])
        {
            tmp = arr[i];
        }
    }
    return tmp;
}

void countSort(int *arr, int size){
    int max = highestValue(arr, size);
    int tmp[max + 1];
    int t, i, j;
    for (int i = 0; i < max + 1; i++)
    {
        tmp[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        t = arr[i];
        tmp[t] += 1;
    }
    i = j = 0;
    while (i <= max)
    {
        while (tmp[i] != 0)
        {
            arr[j] = i;
            j++;
            tmp[i] -= 1;
        }
        i++;
    }
}

int main()
{
    int arr[] = {6, 3, 5, 9, 1, 2, 1, 2, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    traverse(arr, size);
    countSort(arr, size);
    traverse(arr, size);

    return 0;
}