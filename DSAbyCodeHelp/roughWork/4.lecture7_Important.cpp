#include<iostream>
#include<math.h>
using namespace std;

int requestN(){
  int n;
  cout<<"Enter n: ";
  cin>>n;

  return n;
}

int main(){
  // Reverse Integer  URL: https://leetcode.com/problems/reverse-integer/
  // int n = requestN(), r=0;
  // while (n)
  // {
  //   if (r > INT32_MAX/10 || r < INT32_MIN/10)
  //   {
  //     cout<<"OUT of BOUND!!!";
  //     return 0;
  //   }
  //   r = r*10 + n%10;
  //   n/=10;
  // }
  // cout<<"Reversed Integer: "<<r<<endl;
  // ---------------------------------

  // Complement of Base 10 integer  URL: https://leetcode.com/problems/complement-of-base-10-integer/description/
  // int n = requestN(), ans=0, count=0;
  // while (n)
  // {
  //   int bit=(n&1)^1;
  //   // ans = (ans<<1) | bit;
  //   ans=bit*pow(2, count) + ans;
  //   n>>=1;
  //   // count++;
  // }
  // cout<<ans;
  // ----------------------------------
// !MOST IMPORTANT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  // int n = 5;
  // n = (n<<1) & 1;
  // Setting a bit at 2nd location to 1 (1 << positionOfBit) with only OR operation
  // n = n | 1<<1; 
  // Setting a bit at 3rd location to 0 (1 << positionOfBit) with NOT & AND operation
  // n = n & ~(1<<2); 
  // Toggling a bit at 3rd location to 0 or 1 (1 << positionOfBit) with NOR operation (Preffered)
  // n=n ^ 1<<1;
  // n = 1<<2 ^ n;
  // n=1;
  // n = n<<2 ^ 1;
  // cout<<n<<endl;

  // Power of 2 URL: https://leetcode.com/problems/power-of-two/description/
  int n = 18;
  if(n&1){
    cout<<"Not a Power of 2"<<endl;
  }
  else{
    cout<<"Is a Power of 2"<<endl;
  }


  return 0;
}
