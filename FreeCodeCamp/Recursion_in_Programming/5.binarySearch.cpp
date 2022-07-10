#include<iostream>
using namespace std;

// int searchB(int* arr, int size, int l, int h, int num){

//     if (h < l)
//     {
//         return -1;
//     }
//     if (num == arr[l])
//     {
//         return l;
//     }
//     else if (num == arr[h])
//     {
//         return h;
//     }

//     if (num > arr[h/2])
//     {
//         return searchB(arr, size, h/2, h - 1, num);
//     }
//     else if (num < arr[h/2])
//     {
//         return searchB(arr, size, l + 1, h/2, num);
//     }
//     else{
//         return h/2;
//     }
// }

int searchB(int* arr, int l, int h, int num){
    if (l > h)
    {
        return -1;
    }
    int mid = (l + h)/2;
    if (num == arr[mid])
    {
        return mid;
    }

    if (num > arr[mid])
    {
        return searchB(arr, mid + 1, h, num);
    }

    return searchB(arr, l, mid - 1, num);
}



int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);
    int num;
    cout<<"Enter a num to search: ";
    cin>>num;
    // int ans = searchB(arr, size, 0, size - 1, num);
    int ans = searchB(arr, 0, size - 1, num);
    if (ans == -1)
    {
        cout<<"Not Found: "<<num<<endl;
    }
    else{
        cout<<"Found: "<<ans<<endl;
    }
    
    return 0;
}