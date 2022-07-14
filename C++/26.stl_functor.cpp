#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1, 56, 34, 8, 23, 200, 2};
// here we sent the function as an object to the another function
    sort(arr, arr+7, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}