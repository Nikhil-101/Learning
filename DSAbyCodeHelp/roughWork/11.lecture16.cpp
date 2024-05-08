#include<iostream>
using namespace std;

// SELECTION SORT

void print1DArray(int *arr, int size){
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return;
}

int main(){
  // int arr[] = {5, 2, 87, 0, 1};
  int arr[] = {6, 2, 8, 4, 10};
  int i = 0, j=0, size = sizeof(arr)/sizeof(int);
  while (i<size-1)
  {
    j=i+1;
    int smallIndex = i;
    while (j<size)
    {
      if(arr[smallIndex]>arr[j]){
        smallIndex = j;
      }
      j++;
    }
    int tmp = arr[i];
    arr[i] = arr[smallIndex];
    arr[smallIndex] = tmp;
    i++;
    print1DArray(arr, size);
  }
  
  print1DArray(arr, size);


  return 0;
}
