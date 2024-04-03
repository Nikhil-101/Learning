#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  string str="hello ";
  str.append("world!!!");
  cout<<str<<endl;
  reverse(str.begin(), str.end());
  cout<<str<<endl;

  unsigned int i = -10;
  cout<<sizeof(i)<<endl;
  cout<<i<<endl;

  return 0;
}
