// #include<iostream>
#include<algorithm>
#include"000.functins.h"

using namespace std;

int main(){
  // string str= "Hello";
  // str.append(" World");

  // cout<<str<<endl;
  // reverse(str.begin(), str.end());
  // cout<<str<<endl;

  vector<int> v1 = {3, 5, 7, 8, 1, 3};
  vector<int>::iterator it=v1.end();
  v1.insert(it, 100);

  print1DVector(v1);
  v1.shrink_to_fit();
  cout<<v1.capacity()<<endl;
  for(int i:v1){
    cout<<i<<" ";
  }cout<<endl;
  
  return 0;
}
