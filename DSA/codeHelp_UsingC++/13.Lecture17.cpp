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

int sortingBubble(int arr[], int size)
{
    bool swapped=false;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped=true;
            }
            if (swapped==false)
            {
                break;
            }
            
        }
    }
    return 1;
}

int main(){
    int arr[]={4, 2, 8, 1, 3, 6, 9, 0};
    int size=sizeof(arr)/sizeof(int);
    traverseArray(arr, size);
    sortingBubble(arr, size);
    traverseArray(arr, size);

    return 0;
}