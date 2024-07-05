#include"000.functins.h"

void recursions(int* arr, int size, int s=0, int e=0){
  if (s>e)
  {
    return;
  }
  int mid=(s+e+1)/2;
  // go to left size
  recursions(arr, size, s, mid-1);
  // go to right size
  recursions(arr, size, mid+1, e);
  cout<<arr[mid]<<" ";
  return;
}

int main(){
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(arr)/sizeof(int);

  recursions(arr, size, 0, size-1);
  cout<<endl;

  return 0;
}
