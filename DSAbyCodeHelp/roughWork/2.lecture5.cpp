#include<iostream>
using namespace std;

int valueN()
{
  int n;
  cout << "Enter num: ";
  cin >> n;

  return n;
}

int main(){
  // Fibonacci Series
  // int a=0, b=1, i=0;
  // int n=valueN();
  // cout<<a<<" "<<b<<" ";
  // while (i<n-2)
  // {
  //   int sum = a+b;
  //   a=b;
  //   b=sum;
  //   cout<<sum<<" ";
  //   i++;
  // }
  // cout<<endl;

  // Prime Number
  // int num=valueN(), half=num/2, i=2;
  // bool isPrime=1;

  // while (i<=half)
  // {
  //   if(num%i){
  //     i++;
  //     continue;   
  //   }
  //   isPrime=0;
  //   break;
  // }

  
  // if (isPrime)
  // {
  //   cout<<"It is Prime"<<endl;
  // }
  // else{
  //   cout<<"Not a Prime"<<endl;
  // }

  //  Leet Code Question
  // 1281. Subtract the Product and Sum of Digits of an Integer
  int num = 159, sum=0, product=1;

  while (num>0)
  {
    int digit=num%10;
    cout<<digit<<endl;

    sum+=digit;
    product*=digit;
    num/=10; 
  }

  cout<<product-sum<<endl;

  return 0;
}
