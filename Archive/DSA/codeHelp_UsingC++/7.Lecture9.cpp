#include<iostream>
using namespace std;

void displayArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

bool Lsearch(int arr[], int size, int element){
   for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            cout<<"Found at "<<i<<" position."<<endl;
            return 1;
        }
    }
    cout<<"Not Found!!!"<<endl;
    return 0;
}
// Using another array
// bool arrayRev(int arr[], int size, int narray[]){
//     for (int i = 0; i < size; i++)
//     {
//         narray[size - 1 - i] = arr[i];
//     }
//     cout<<"Done!!!"<<endl;
//     return 0;
// }

// Using swap in same array
bool arrayRev(int arr[], int size){
    int tmp, index;
    for (int i = 0; i < size/2; i++)
    {
        index = size - 1 - i;
        tmp = arr[i];
        arr[i] = arr[index];
        arr[index] = tmp;
    }
    cout<<"DONE!!!"<<endl;

    return 1;
}


int main(){
// Initialize entire array with same value
    // int size = 100;
    // int arr[size];
    // fill_n(arr, size, 2);
    // displayArray(arr, size);

// Find Max & Min in an arrray
    // int arr[10] = {6, 2, 4, -1, 3, 9, 80, 7, 0, 5};
//     // int arr[10] = {0};
//     int min = arr[0], max = arr[0];
//     for (int i = 1; i < 10; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     cout<<"Minimum value: "<<min<<endl;
//     cout<<"Maximum value: "<<max<<endl;

// // Print Sum of all elements in an array
//     int sum = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         sum += arr[i];
//     }
//     cout<<"SUM of all elemants of array: "<<sum<<endl;
    
// Linear Search
    int arr[10] = {6, 2, 4, -1, 3, 9, 80, 7, 0, 5};
    int size = sizeof(arr)/sizeof(int);
    // int element = 0;
    // Lsearch(arr, size, element);

// Reverse an Array(Using another array)
    // int narray[10];
    // arrayRev(arr, size, narray);
    // displayArray(narray, size);

// Reverse an Array(Using same array(swapping))

    arrayRev(arr, size);
    displayArray(arr, size);

    return 0;
}