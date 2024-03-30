#include<iostream>

using namespace std;

int main(){
  // int c;
  // cout<<"Enter a capital or regular alphabet or single digit number"<<endl;
  // c= cin.get();
  // if(c>= (int)'A' && c<=(int)'Z'){
  //   cout<<"Its a Capital Letter!!!"<<endl;
  // }
  // else if(c>=(int)'a' && c<=(int)'z'){
  //   cout<<"A Small Letter!!!"<<endl;
  // }
  // else if(c>=(int)'1' &&  c<=(int)'9'){
  //   cout<<"Its a single digit number"<<endl;
  // }
  // else{
  //   cout<<"Not Supported Character"<<endl;
  // }

  // Find Prime num.
  int n, i=2;
  cout<<"Enter num:"<<endl;
  cin>>n;

  while (i<n)
  {
    if (n%i==0)
    {
      cout<<"Non-Prime Number!!!"<<endl;
      break;
    }
    i++;
  }
  if (i==n)
  {
    cout<<"Prime Number!!!"<<endl;
  }
  

  return 0;
}
