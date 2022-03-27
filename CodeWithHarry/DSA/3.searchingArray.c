#include <stdio.h>

int linearSearch(int arr[], int uSize, int element)
{
    for (int i = 0; i < uSize; i++)
    {
        if (arr[i] == element)
        {
            printf("Found %d at %d index.\n", arr[i], i + 1);
            return 1;
        }
    }
    printf("Not Found!!!\n");

    return 0;
}

int binarySeaerch(int arr[], int uSize, int element)
{
    int low = 0, mid, high = uSize - 1;
    while (low <= high)
    {
        mid = (low + high)/2;
        printf("%d\n", mid);
        if (arr[mid] == element)
        {
            printf("Element %d found at index %d.\n", arr[mid], mid + 1);
            return 0;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
    }
    printf("Not Found\n");
    return 0;
}

int main()
{
    int arr[20] = {1, 2, 5, 7, 9, 22, 55, 100, 126};
    int uSize = 9, searchElenemt = 200;
    linearSearch(arr, uSize, searchElenemt);
    binarySeaerch(arr, uSize, searchElenemt);

    return 0;
}