#include<iostream>
using namespace std;

int findEO(int n)
{
  if (n & 1)
  {
    return 0;
  }
  return 1;
}

int factorial(int n){
  int ans=1;
  if (n==0)
  {
    return 1;
  }
  
  while (n>0)
  {
    ans=ans*(n);
    n--;
  }
  return ans;
}

int main(){
  // Mini Calculator
  // int n = 5, m=7;
  // char ch='/';

  // switch (ch)
  // {
  // case '+':
  //   cout<<"Sum: "<<n+m;
  //   break;
  // case '-':
  //   cout<<"Subtract: "<<m-n;
  //   break;
  // case '*':
  //   cout<<"Product: "<<n*m;
  //   break;
  
  
  // default:  cout<<"Exception Occured!!!";
  //   break;
  // }

  // Finding Even Odd Function

  // int n = 276;
  // int ans = findEO(n);

  // if(ans){
  //   cout<<"Its Even"<<endl;
  //   return 0;
  // }
  // cout<<"Its Odd"<<endl;

  // Find nCr value
  int n=8, r=2;
  cout<<"Value of nCr: "<< factorial(n)/(factorial(r)*factorial(n-r));

  return 0;
}
