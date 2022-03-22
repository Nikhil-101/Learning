#include<iostream>
using namespace std;

// Reversing an Array

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}


void reverseArr(int arr[], int size)
{
    int tmp;
    for (int i = 0; i < size/2; i++)
    {
        tmp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = tmp;
    }
    cout << endl << "Reversing an array: " << endl;
    printArr(arr, size);
}


int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 10};
    int size = sizeof(arr)/sizeof(int);
    cout << "Given Array: " << endl;
    printArr(arr, size);
    reverseArr(arr, size);
    cout << endl;
    return 0;
}