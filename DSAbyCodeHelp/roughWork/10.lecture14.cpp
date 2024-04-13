#include<iostream>
using namespace std;

int main(){
  // Find pivot point in array
  // int arr[] = {12, 13, 17, 18, 1, 2, 3, 5, 6, 8, 10, 11};
  // int arr[] = {12, 13, 17, 18, 1, 2, 5, 6, 8, 9};
  // int size = sizeof(arr)/sizeof(int), left = 0, right = size - 1;
  // while (left < right)
  // {
  //   int mid = left + (right - left)/2;
  //   if(arr[0]<arr[mid]){
  //     left = mid + 1;
  //   }
  //   else{
  //     right = mid;
  //   }
  //   // cout<<left<<mid<<right<<endl;
  // }
  // cout<<left<<endl;

  // Search an element in a Rotated Array
  // int arr[] = {12, 13, 17, 18, 1, 2, 5, 6, 8, 9};
  // int arr[] = {1, 2};
  // // int arr[] = {10, 2, 3, 4, 5};
  // int size = sizeof(arr)/sizeof(int), left = 0, right = size - 1, k = 2;
  // // find pivot first
  // if(arr[left]>arr[right]){
  //   while(left < right){
  //     int mid = left + (right - left)/2;
  //     if (arr[mid]>arr[0])
  //     {
  //       left = mid + 1;
  //     }
  //     else{
  //       right = mid;
  //     }
  //   }
  //   if(k>=arr[0]){
  //     right = left - 1;
  //     left = 0;
  //   }
  //   else{
  //     right = size - 1;
  //   }
  // }
  // while (left <= right)
  // {
  //   int mid = left + (right - left)/2;
  //   if(arr[mid] == k){
  //     cout<<"Index: "<<mid + 1<<endl;
  //     return mid;
  //   }
  //   else if(arr[mid]<k){
  //     left = mid + 1;
  //   }
  //   else{
  //     right = mid - 1;
  //   }
  // }
  //   cout<<"Not Found"<<endl;  

  // Find square root
  int n = 99999;
  int left = 0, right = n;
  long long int ans;
  while (left <= right)
  {
    long long int mid = left + (right - left) / 2;
    long long int sq = mid * mid;
    if (sq == n)
    {
      cout<<"Value: "<<mid<<endl;
      return mid;
    }
    else if (sq > n)
    {
      right = mid - 1;
    }
    else
    {
      ans = mid;
      left = mid + 1;
    }
  }
  cout << "Value: " << ans << endl;
  return 0;
}
