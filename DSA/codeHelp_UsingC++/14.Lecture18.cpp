#include<iostream>
using namespace std;

void traverseArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
    return;
}

int sortingInsertion(int arr[], int size){
    int k;
    for (int i = 0; i < size-1; i++)
    {
        k=i;
        while (arr[k]>arr[k+1] && k>=0)
        {
            swap(arr[k], arr[k+1]);
            k--;
        }
    }
    return 1;
}

int main(){
    int arr[]={4, 2, 8, 1, 3, 6, 9, 0};
    int size=sizeof(arr)/sizeof(int);
    traverseArray(arr, size);
    sortingInsertion(arr, size);
    traverseArray(arr, size);

    return 0;
}