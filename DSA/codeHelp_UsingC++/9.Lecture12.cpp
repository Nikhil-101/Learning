#include<iostream>
using namespace std;

bool searchBinary(int arr[], int size, int key){
    int left = 0, right = size - 1, mid;
    while (left <= right)
    {
        // mid = (left + right)/2;
        // prevents int from going above INT_MAX value
        mid = left + (right - left)/2;
        if (key == arr[mid])
        {
            cout<<"Found "<<arr[mid]<<" at "<<mid + 1<<" position."<<endl;
            return 1;
        }
        else if (key < arr[mid])
        {
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout<<"Not Found"<<endl;
    return 0;
}

int main(){
    int arr[] = {0, 2, 4, 6, 7, 42, 333, 756};
    int size = sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        searchBinary(arr, size, arr[i]);
    }
    
    return 0;
}