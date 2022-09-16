#include<iostream>
using namespace std;
// Quick Sort

void traverse(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int& a, int& b){
    int tmp=a;
    a=b;
    b=tmp;
    return;
}

int partition(int arr[], int s, int e){
    int pivot=arr[s], count=0;
    //Count for smaller values than pivot
    for (int i = s; i <= e; i++)
    {
        if (arr[i]<pivot)
        {
            count++;
        }
    }
    // Place pivot to its correct location
    count+=s;
    swap(arr[s], arr[count]);
    // now all less value than pivot is placed left of pivot and vice versa
    int i=s, j=e, foundLeft=0, foundRight=0;
    while (i<count && j>count)
    {
        if (arr[i]>pivot && !foundLeft)
        {
            foundLeft=1;
            
            
        }
        if (arr[j]<pivot && !foundRight)
        {
            foundRight=1;
            
        }
        if (!foundLeft)
        {
            i++;
        }
        if (!foundRight)
        {
            j--;
        }
            
        if (foundLeft && foundRight)
        {
            swap(arr[i], arr[j]);
            foundLeft=0;
            foundRight=0;
        }
        
    }
    return count;
}

void sortQuick(int arr[], int s, int e){
    if (s>=e)
    {
        return;
    }
    int p=partition(arr, s, e);
    sortQuick(arr, s, p-1);
    sortQuick(arr, p+1, e);
}


int main(){
    int arr[]={9,2,4,1,7,3};
    int size=sizeof(arr)/sizeof(int);

    traverse(arr, size);
    sortQuick(arr, 0, size-1);
    traverse(arr, size);

    return 0;
}