#include<iostream>
using namespace std;

int main(){
  // Mountain in an array
  int arr[] = {1, 3, 4, 10, 6, 2};
  int size = sizeof(arr)/sizeof(int);
  int left = 0, right=size-1;
  while(left<right){
    int mid = left + (right-left)/2;
    if (arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
    {
      cout<<"Mountain point is at: "<<mid<<" with value of: "<<arr[mid]<<endl;
      return 0;
    }
    else if(arr[mid]<arr[mid+1]){
      left = mid;
    }
    else{
      right = mid;
    }
  }
  cout<<"Not Found!!!"<<endl;

  return 0;
}
