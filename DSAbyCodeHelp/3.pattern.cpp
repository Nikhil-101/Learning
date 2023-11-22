#include <iostream>
using namespace std;

int main()
{
  // Pattern #1
  //   int i=4, j=4;
  //   while (i>0)
  //   {
  //     while (j>0)
  //     {
  //       cout<<"*";
  //       j--;
  //     }
  //     cout<<endl;
  //     i--;
  //     j=4;
  //   }

  // Pattern #2
  int n;
  cout << "enter num: ";
  cin >> n;

  // int i=1, j=1;
  // while (i<=n)
  // {
  //   while (j<=n)
  //   {
  //     cout<<i;
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  //   j=1;
  // }

  // Pattern #3
  // int i = 1, j = n;
  // while (i <= n)
  // {
  //   while (j > 0)
  //   {
  //     cout << i;
  //     j--;
  //   }
  //   cout << endl;
  //   j = n - i;
  //   i++;
  // }

  // Pattern #4
  // int i=1, j;
  // while (i<=n)
  // {
  //   j=i;
  //   while (j>0)
  //   {
  //     cout<<'*';
  //     j--;
  //   }
  //   i++;
  //   cout<<endl;
  // }

  // Pattern #5
  // int i=1, j=0;
  // while (i<=n)
  // {
  //   int x=i;
  //   while (j<i)
  //   {
  //     cout<<x;
  //     x++;
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  //   j=0;
  // }

  // Pattern #6
  // int i = 1, j;
  // while (i <= n)
  // {
  //   j = i;
  //   while (j >= 1)
  //   {
  //     cout << j << ' ';
  //     j--;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern #7
  // char c='A';
  // int i=0, j=0;
  // while (i<n)
  // {
  //   while (j<n)
  //   {
  //     cout<<c<<' ';
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  //   j=0;
  //   c=c+1;
  // }
  // Pattern #8
  // char c = 'A';
  // int i = 0, j = 0;
  // while (i < n)
  // {
  //   while (j < n)
  //   {
  //     char ch = c + j;
  //     cout << ch << ' ';
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  //   j = 0;
  // }

  // Pattern #9
  // char c = 'A';
  // int i = 0, j = 0;
  // while (i < n)
  // {
  //   while (j <= i)
  //   {
  //     char ch = c + n - 1 - i + j;
  //     cout << ch << ' ';
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  //   j = 0;
  // }

  // Pattern #10
  // int i = 1, j = 0;
  // while (i <= n)
  // {
  //   while (j < n - i)
  //   {
  //     cout << ' ';
  //     j++;
  //   }
  //   j = 0;
  //   while (j < i)
  //   {
  //     cout << '*';
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  //   j = 0;
  // }

  // Pattern #11
  int i = 1;
  while (i <= n)
  {
    int j = 0;
    while (j < n - i)
    {
      cout << ' ';
      j++;
    }

    j = 1;
    while (j <= i)
    {
      cout << j;
      j++;
    }
    
    j = i;
    while (j > 1)
    {
      cout << j - 1;
      j--;
    }
    cout << endl;
    i++;
  }

  return 0;
}
