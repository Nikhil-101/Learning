#include "000.functins.h"

// Insertion Sort

int main(){
  int arr[] = {4, 2, 7, 1, 5, 9, 3, 8};
  int arr_size = sizeof(arr)/sizeof(int);
  vector<int> sorted;

  for (int i = 0; i < arr_size; i++)
  {
    if(sorted.size()<1){
      sorted.push_back(arr[i]);
    }
    else{
      int j=sorted.size()-1;
      vector<int>::iterator itr=sorted.end();
      while(j>=-1){
        if(sorted[j]<arr[i]){
         sorted.insert(itr, arr[i]);
         break;
        }
        else if(j<0){
          sorted.insert(sorted.begin(), arr[i]);
          break;
        }
        j--;
        itr--;
      }
    }
  }
  print1DVector(sorted);
  return 0;
}
