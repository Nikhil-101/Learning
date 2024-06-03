#include<iostream>
using namespace std;

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

  return 0;
}
