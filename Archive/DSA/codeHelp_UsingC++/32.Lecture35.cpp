#include<iostream>
using namespace std;

void traverse(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[], int s, int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *arr1=new int(len1);
    int *arr2=new int(len2);

    int k=s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i]=arr[k++];
    }
    k=mid+1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i]=arr[k++];
    }
    
    int index1=0, index2=0, index=s;
    while (index1<len1 && index2<len2)
    {
        if (arr1[index1]<arr2[index2])
        {
            arr[index++]=arr1[index1++];
        }
        else{
            arr[index++]=arr2[index2++];
        }
    }
    while (index1<len1)
    {
        arr[index++]=arr1[index1++];
    }
    while (index2<len2)
    {
        arr[index++]=arr2[index2++];
    }
    delete[] arr1;
    delete[] arr2;
}

void sortMerge(int arr[], int s, int e){
    if (s>=e)
    {
        return;
    }
    int mid=s+(e-s)/2;
    sortMerge(arr, s, mid);
    sortMerge(arr, mid+1, e);
    merge(arr, s, e);
}


int main(){
    int arr[]={5,2,8,7,1,9,3,6};
    int size=sizeof(arr)/sizeof(int);
    traverse(arr, size);
    sortMerge(arr, 0, size-1);
    traverse(arr, size);


    return 0;
}