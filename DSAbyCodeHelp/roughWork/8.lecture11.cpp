#include<iostream>
using namespace std;

int main(){
  // Binary Search
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int left=0, right=sizeof(arr)/sizeof(int)-1;
  int num=6, found=0;

  while (left<=right)
  {
    int mid = left + (right-left)/2;
    if(arr[mid]==num){
      cout<<"Found "<<arr[mid]<<" at: "<<mid<<" position"<<endl;
      found=1;
      break;
    }

    else if(arr[mid]>num){
      right=mid-1;
    }

    else{
      left=mid+1;
    }
  }
  if(found==0){
    cout<<"Not Found: "<<num<<endl;
  }

  return 0;
}
