#include<iostream>
using namespace std;

int main(){
  // cout<<"Namaste Dunia"<<endl;
  // double f = 1.5;
  // cout<<sizeof(f)<<endl;
  // int a='a';
  // cout<<a;
  // ---------------
  // char ch;
  // cin>>ch;
  // if(97 <= ch && ch <= 122){
  //   cout<<"Lower Case Letter"<<endl;
  // }
  // else if (65 <= ch && ch <= 90)
  // {
  //   cout<<"Upper Case Letter"<<endl;
  // }
  // else if(48 <= ch && ch <= 57){
  //   cout<<"This is Numeric"<<endl;
  // }
  // ----------------
  // Sum of all the even numbers
  // int num=10;
  // int n=2, sum=0;
  // while (n<=10)
  // {
  //   sum=sum+n;
  //   n+=2;
  // }
  // cout<<sum;
  // -----------------
  // Num is Prime or not
  // int num=127, n=2;
  // while (n<num)
  // {
  //   if (num%n==0)
  //   {
  //     cout<<"Not a Prime Number"<<endl;
  //     return 0;
  //   }
  //   n++;
  // }
  // cout<<"Is a Prime Number"<<endl;
  // -----------------
  // Patterns

  // int i=0, j=0;
  // while(i<4){
  //   while(j<4){
  //     cout<<'*';
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  //   j=0;
  // } 
  // -----------------
  
  // int i=1, j=1;
  // while(i<=4){
  //   while(j<=4){
  //     cout<<i;
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  //   j=1;
  // }

  // int i=1, j=1;
  // while (i<=4){
  //   while (j<=4-i+1)
  //   {
  //     cout<<i;
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  //   j=1;
  // }
  // -----------------

  // int n=1, i=0, j=0;
  // while (i<3)
  // {
  //   while (j<3)
  //   {
  //     cout<<n;
  //     n++;
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  //   j=0;
  // }
  // -------------------
  // int i=0, j=0;
  // while (i<4)
  // {
  //   while (j<4-3+i)
  //   {
  //     cout<<'*';
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  //   j=0;
  // }
  // -------------------
  // int n=4;
  // int i=0, j=0;
  // while (i<=n)
  // {
  //   j=i;
  //   while (j>0)
  //   {
  //     cout<<j;
  //     j--;
  //   }
  //   cout<<endl;
  //   i++;
  // }
  // ---------------------
  // int n=7, i=0, j=0;
  // char ch='A';
  // while (i<n)
  // {
  //   while (j<n)
  //   {
  //     cout<<ch;
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  //   j=0;
  //   ch++;
  // }
  // -------------------
  // int n=3, i=0, j=0;
  // char ch='A', c;
  // while (i<n)
  // {
  //   while (j<n)
  //   {
  //     c=ch+j;
  //     cout<<c;
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  //   j=0;
  //   ch++;
  // }
  // -------------------
  int num=7;
  int i=0,j=0,k=0,l=0;
  while (i<num)
  {
    while (j<num-i-1)
    {
      cout<<' ';
      j++;
    }
    while (k<=i)
    {
      cout<<k+1;
      k++;
    }
    while (l<i)
    {
      cout<<i-l;
      l++;
    }
    cout<<endl;
    i++;
    j=0;
    k=0;
    l=0;
  }
  return 0;
}