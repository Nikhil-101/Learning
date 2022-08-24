#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
    return;
}

void traverseArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void traverseArray(vector<int> arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void reverseArray(int arr[], int size)
{
    int range=size/2;
    for (int i = 0; i < range; i++)
    {
        swap(arr[i], arr[size-i-1]);
    }
    return;
}

int main(){
// Reverse an entire array
    // int arr[]= {1, 4, 6, 7, 8, 9};
    // int size=sizeof(arr)/sizeof(int);
    // traverseArray(arr, size);
    // reverseArray(arr, size);
    // traverseArray(arr, size);

// Reverse am array after given index
    // vector<int> arr={1, 2, 3, 4, 5, 6};
    // int size=arr.size();
    // int m = 3;
    // int l=m+1, r=size-1;        //l=left ptr && r=right ptr
    // int range=(size-m)/2;
    // traverseArray(arr, size);
    // for (int i = 0; i < range; i++,l++,r--)
    // {
    //     swap(arr[l], arr[r]);
    // }
    // traverseArray(arr, size);

// Merge two sorted arrays
    // vector<int> odd={1,3,5,7,9};
    // vector<int> even={2,4,6,8};
    // vector<int> odd={1,3,5,7,9,11,13,15,17,0,0,0};
    // vector<int> even={2,4,6,8,10,12,14,16,18,20,22,50,56};
    // vector<int> ans;

    // int evenSize=even.size();
    // int oddSize=odd.size();
    // int i=0, j=0;
    // traverseArray(ans, ans.size());
    // while (i<evenSize && j<oddSize)
    // {
    //     if (odd[j]>even[i])
    //     {
    //         if (even[i]==0)
    //         {
    //             i++;
    //             continue;
    //         }
            
    //         ans.push_back(even[i]);
    //         i++;
    //     }
    //     else{
    //         if (odd[j]==0)
    //         {
    //             j++;
    //             continue;
    //         }
    //         ans.push_back(odd[j]);
    //         j++;
    //     }
    // }
    // if (evenSize>oddSize)
    // {
    //     while (i<evenSize)
    //     {
    //         ans.push_back(even[i]);
    //         i++;
    //     }
    // }
    // else{
    //     while (j<oddSize)
    //     {
    //         ans.push_back(odd[j]);
    //         j++;
    //     }
        
    // }
    // traverseArray(ans, ans.size());

// Move Zeros to last indexes

    vector<int> arr={1, 2, 0, 0, 3, 4, 0, 5, 0, 0};
    // Method #1;
    // int i=0, j, k=arr.size()-1;
    // traverseArray(arr, arr.size());
    // while (i<k)
    // {
    //     if (arr[i]==0)
    //     {
    //         j=i;
    //         while (j<k)
    //         {
    //             swap(arr[j], arr[j+1]);
    //             j++;
    //         }
    //         k--;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    // traverseArray(arr, arr.size());
    
    // Method #2:
    int i=0, j=0;
    traverseArray(arr, arr.size());
    while (j<arr.size())
    {
        if (arr[j]!=0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
    traverseArray(arr, arr.size());

    return 0;
}