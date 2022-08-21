#include<iostream>
using namespace std;
// Selection Sort
bool swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
    return 1;
}

void traverseArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

bool Sel_sorting(int arr[], int size){
    int minIndex;
    for (int i = 0; i < size-1; i++)
    {
        minIndex=i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    return 1;
}
// bool Sel_sorting(int arr[], int size){
//     int k=0;
//     for (int i = 0; i < size-1; i++)
//     {
//         for (int j = k+1; j < size; j++)
//         {
//             if (arr[k]>arr[j])
//             {
//                 swap(arr[k], arr[j]);
//             }
//         }
//         k++;
//     }
//     return 1;
// }

int main(){
    int arr[]={1,9,3,7,4,0};
    int size=sizeof(arr)/sizeof(int);

    if (Sel_sorting(arr, size))
    {
        traverseArray(arr, size);
    }
    

    return 0;
}