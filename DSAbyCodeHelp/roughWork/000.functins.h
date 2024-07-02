#include<iostream>
#include<vector>
using namespace std;

void swap(int& a, int& b){
  int tmp=a;
  a=b;
  b=tmp;
  return;
}

void print1DArray(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return;
}

void print2DArrayx3(int arr[][3], int rowSize, int colSize){
  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize; j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  
}

void print1DVector(vector<int>& v){
  for (auto elem : v){
    cout << elem << " ";
  }
  cout << endl;
}
