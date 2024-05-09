// #include<iostream>
#include "000.functins.h"
// using namespace std;

// BUBBLE SORT

int main(){
  int arr[] = {5, 2, 7, 3, 1, 9, 0};
  int size = sizeof(arr)/sizeof(int), i = 0, j = 0;

  while (i<size-1)
  {
    j=1;
    while (j<size)
    {
      if(arr[j]<arr[j-1]){
        int tmp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=tmp;
      }
      j++;
    }
    size--;
  }
  size = sizeof(arr) / sizeof(int);
  print1DArray(arr, size);

  return 0;
}
