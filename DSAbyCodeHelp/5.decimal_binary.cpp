#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  // Convert decimal into binary system
  // int num = 21, ans = 0, count = 0;
  // while (num != 0)
  // {
  //   int bit = num & 1;
  //   ans = bit * pow(10, count) + ans;
  //   num >>= 1;
  //   count++;
  // }
  // cout << "Binary Form: "<<ans;

  // add one bit to binary number
  // int n=1011, m=100, ans=0, carry=0, count=0;
  // while (n!=0 || m!=0)
  // {
  //   int tmp=(n%10 + m%10 + carry);
  //   ans=(tmp%2)*pow(10, count) + ans;
  //   carry=tmp/2;
  //   count++;
  //   n/=10;
  //   m/=10;
  // }
  // if (carry!=0)
  // {
  //   ans=pow(10, count) + ans;
  // }

  // cout<<ans;

  // Convert -ive decimal to binary system
  // ** Incomplete as its should be done after arrays or queues **
  int num = -2056, ignore = -num, count = 0;
  long bits = 0;
  while (count<32)
  {
    int bit = (ignore & 1) ? 0 : 1;
    bits += bit * pow(10, count);
    count++;
    ignore >>= 1;
  }
  cout << bits << endl;
  long ans = 0, carry = 1;
  count = 0;
  while (bits != 0)
  {
    int tmp = bits % 10 + carry;
    carry = tmp / 2;
    ans += (tmp % 2) * pow(10, count);
    count++;
    bits /= 10;
  }
  cout << ans;

  return 0;
}
