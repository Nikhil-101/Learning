#include<iostream>
#include <string>
#include<algorithm>
#include<math.h>
using namespace std;

string compliment1(string binary){
  for (int i = 0; i < 32; i++)
  {
    if (binary[i] == '1')
    {
      binary[i] = '0';
    }
    else
    {
      binary[i] = '1';
    }
  }
  return binary;
}

string compliment2(string binary){
  int carry = 1, i = 31;
  while (carry != 0 && i >= 0)
  {
    if (binary[i] == '1')
    {
      binary[i] = '0';
    }
    else if (binary[i] == '0')
    {
      binary[i] = '1';
      carry = 0;
    }
    i--;
  }
  return binary;
}

  int main()
  {
    // Decimal to binary
    // int num = 10000;
    // string result="";
    // while(num>0){
    //   if(num&1){
    //     result.append("1");
    //   }
    //   else{
    //     result.append("0");
    //   }
    //   num>>=1;
    // }
    // reverse(result.begin(), result.end());
    // cout<<result<<endl;

    // -ive to binary
    int n = -10, count = 0;
    string binary = "";
    n = -(n);
    while (count < 32)
    {
      if (n & 1)
      {
        binary.append("1");
      }
      else
      {
        binary.append("0");
      }
      n >>= 1;
      count++;
    }
    reverse(binary.begin(), binary.end());

    binary = compliment1(binary);
    binary = compliment2(binary);
    cout << binary << endl;
    
    bool negativeBinary=0;

    // binary to decimal
    if (binary[0] == '1')
    {
      negativeBinary=1;
    }
    else{
      negativeBinary=0;
    }

    binary=compliment1(binary);
    binary=compliment2(binary);
    cout<<binary<<endl;
    int decimal=0;
    for (int i = 0; i < 32; i++)
    {
      decimal = decimal + pow(2, i) * (int(binary[31-i]) - 48);
    }
    decimal = decimal*(negativeBinary*(-1));
    cout<<decimal<<endl;


    return 0;
  }
