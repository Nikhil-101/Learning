#include <stdio.h>

int traverse(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        printf("Traverse: %d\n", arr[i]);
    }
    return 1;
}

int swap(int *m, int *n){
    int tmp = *m;
    *m = *n;
    *n = tmp;
    printf("m: %d\n", *m);
    printf("n: %d\n", *n);

    return 1;
}

int bubbleSorting(int *arr, int size){
    int sig;
    printf("Size: %d\n", size);
    for (int i = 0; i < size - 1; i++)
    {
        sig = 1;
        for (int j = 0; j < size - 1; j++)
        {
                if (arr[j + 1] < arr[j])
                {
                    swap(&arr[j+1], &arr[j]);
                    sig = 0;
                }
        }
        if (sig==1)
        {
            return 1;
        }
        size--;
    }
    return 1;
}

int main()
{
    // int arr[] = {1, 2, 6, 88, 54, 14};
    int arr[]={7,8,7,8};
    int size = sizeof(arr)/sizeof(int);
    bubbleSorting(arr, size);
    traverse(arr, size);

    return 0;
}