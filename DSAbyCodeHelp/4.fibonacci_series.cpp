#include <iostream>
using namespace std;

int main()
{
  // using while loop

  // int first = 0, second = 1, sum, count = 2, limit;
  // cout << "Enter num: ";
  // cin >> limit;
  // cout << first << ' ' << second << ' ';
  // while (count < limit)
  // {
  //   sum = first + second;
  //   cout << sum << ' ';
  //   first = second;
  //   second = sum;
  //   count++;
  // }

  // using for loop

  int limit, first=0, second=1;
  cout<<"Enter num: ";
  cin>>limit;
  cout<<first<<" "<<second<<" ";
  for (int sum, count=2; limit > count; count++)
  {
    sum=first+second;
    cout<<sum<<" ";
    first=second;
    second=sum;
  }
  

  return 0;
}
