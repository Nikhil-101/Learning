#include<iostream>
using namespace std;

#define PI 3.14

inline int getMax(int& a, int& b){
  return (a>b) ? a : b;
}

void update(int n){
  n++;
}

void update2(int& n){
  n++;
}

int main(){
  int i = 5;
  // Reference Variables(Secondary Name of a Variable)
  int& j = i;
  cout<<i<<endl;
  i++;
  cout<<i<<endl;
  j++;
  cout<<i<<endl;

  update(i);
  cout<<i<<endl;

  update2(i);
  cout<<i<<endl;

  // Dynamic Memory Allocation
  int* num = new int;
  *num = 20;
  cout<<"Ans is here: "<<*num<<endl;
delete num;

  // For Array
  int* arr1 = new int[5];

  delete []arr1;

  // 2D Array Dynamic Memory Allocation
  // As a 3x4 dimension array will have 3 addresses stored for column arrays
  // Reference Lecture: 29 Love Babar DSA Playlist
  int **arr=new int*[3];
  for(int i=0;i<3;i++){
    arr[i]=new int[4];
  }

  for (int i = 0; i < 3; i++){
   delete[] arr[i];
  }
  delete[] arr;

  // "Define" replaces the PI keyword with its value when program is complied...so this method does not take memory of PI in RAM.
  cout<<PI<<endl;

  // inline function is similar to macro defined below in main function. The function name gets replaced by its defination if the length of code is 1 line & it is dependent on compiler if lenght is 2-3 lines. It saves function calling time and reference variable(int&) is used in example to save the copy of the variables passed to the function.
  int a = 6, b=3;
  cout<<getMax(a, b)<<endl;

  return 0;
}
