#include<iostream>
#include<math.h>
using namespace std;

int main(){
  // int a=2;
  // cout<<(a^0)<<endl;
  // Fibonacci Series
  // int first=0, second=1, tmp=0, count=10;
  // cout<<first<<' '<<second<<' ';
  // for (int i = 0; i < count-2; i++)
  // {
  //   tmp=first+second;
  //   cout<<tmp<<' ';
  //   first=second;
  //   second=tmp;
  // }
  // --------------------------
  // Find Prime Number or not
  // int num=29;
  // for (int i = 2; i < num; i++)
  // {
  //   if (num%i==0)
  //   {
  //     cout<<num<<" is Not a Prime Number"<<endl;
  //     return 0;
  //   }
  // }
  // cout<<num<<" is a Prime Number"<<endl;
  // -----------------------------
  // Subtract Product & SUM of n=234
  // int num=234, product=1, sum=0;
  // int tmp=num;
  // while (tmp>0)
  // {
  //   int n=tmp%10;
  //   product*=n;
  //   sum+=n;
  //   tmp/=10;
  // }
  // cout<<"Result: "<<product-sum<<endl;

  // int r=0, n=0, x=123;
  //   while(x!=0){
  //       int digit=x%10;
  //       r=digit+r*10;
  //       if(r>INT32_MAX || r<INT32_MIN){
  //           return 0;
  //       }
  //       x/=10;
  //       n++;
  //   }
  //   cout<<r<<endl;
  // ----------------------------
  // Convert a number into -ive number
  // Binary Representation
//   int pnum=7, nnum=0, binary=0, n=0;
//   while (pnum!=0)
//   {
//     int bit=pnum&1;
//     binary=binary+(bit*pow(10, n));
//     pnum>>=1;
//     n++;
//   }
//   cout<<"Binary: "<<binary<<endl;
// // 1's Compliment
//   n=0;
//   int tmp=binary;
//   binary=0;
//   while (tmp!=0)
//   {
//     int digit=tmp%10;
//     if (digit==0)
//     {
//       digit=1;
//     }
//     else if(digit==1){
//       digit=0;
//     }
//     binary=binary+digit*(pow(10, n));
//     tmp/=10;
//     n++;
//   }

//   cout<<"1's Compliment Binary: "<<binary<<endl;
//   // Adding 1 bit
//   n=0;
//   int carry=1;
//   while (binary!=0 || carry!=0)
//   {
//     int digit = binary%10;
//     if (digit==0 && carry==1)
//     {
//       digit=1;
//       carry=0;
//     }
//     else if(digit==1 && carry==1){
//       digit=0;
//       carry=1;
//     }
//     nnum=nnum+digit*(pow(10, n));
//     binary/=10;
//     n++;
//   }
//   cout<<nnum<<endl;
// ----------------------------
// Complement of a number
  int n=5, mask=INT32_MAX, tmp=n;
  if (n==0)
  {
    return 1;
  }
  
  while (tmp!=0)
  {
    mask<<=1;
    tmp>>=1;
    cout<<"123"<<endl;
  }
  
  cout<<((~n)^mask)<<endl;

  return 0;
}