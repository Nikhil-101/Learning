#include<iostream>
using namespace std;

// Recursion
void traverse(int arr[], int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int isSorted(int arr[], int n){
    if (n<=1)
    {
        return true;
    }
    cout<<arr[n-1]<<" "<<arr[n-2]<<endl;
    if (arr[n-1]<arr[n-2])
    {
        return false;
    }
    
    return isSorted(arr, n-1);
}

int addition(int arr[], int size){
    if (size<1)
    {
        return 0;
    }
    return arr[size-1]+addition(arr, size-1);
}

int linearSearch(int arr[], int size, int key){
    if (size==0)
    {
        return -1;
    }
    if (arr[size-1]==key)
    {
        return size-1;
    }
    return linearSearch(arr, size-1, key);
}

int binarySearch(int arr[],int s, int e, int key){
    traverse(arr, s, e);
    int mid;
    if (s>e)
    {
        return -1;
    }
    mid=s+(e-s)/2;
    if (arr[mid]==key)
    {
        return mid;
    }
    else if (arr[mid]>key)
    {
        return binarySearch(arr, s, mid-1, key);
    }
    else{
        return binarySearch(arr, mid+1, e, key);
    }
}

int main(){
// Is array is sorted using Recursion
    // int arr[]={1, 2, 9, 9, 9};
    // int size=sizeof(arr)/sizeof(int);
    // cout<<isSorted(arr, size)<<endl;

// Sum of all elements in an array
    // int arr[]={1};
    // int size=sizeof(arr)/sizeof(int);
    // cout<<addition(arr, size)<<endl;

// Linear Search
    // int arr[]={1, 2, 3, 4, 5};
    // int size=sizeof(arr)/sizeof(int);
    // cout<<linearSearch(arr, size, 0)<<endl;

// Binary Search
    int arr[]={2, 4, 6, 10, 14, 16};
    int size=sizeof(arr)/sizeof(int);
    cout<<binarySearch(arr, 0, size, 6)<<endl;
    // for (int i = 0; i < size; i++)
    // {
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<binarySearch(arr, 0, size-1, arr[i])<<endl;
    // }
    


    return 0;
}