#include<iostream>
#include<vector>
using namespace std;

void print1DArray(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return;
}

void print1DVector(vector<int>& v){
  for (auto elem : v){
    cout << elem << " ";
  }
  cout << endl;
}
