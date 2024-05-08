#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  string str= "Hello";
  str.append(" World");

  cout<<str<<endl;
  reverse(str.begin(), str.end());
  cout<<str<<endl;

  return 0;
}
