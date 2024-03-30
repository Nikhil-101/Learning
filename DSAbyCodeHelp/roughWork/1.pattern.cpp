#include<iostream>
using namespace std;

int valueN(){
  int n;
  cout<<"Enter n: ";
  cin>>n;

  return n;
}

int main(){
  int i=0, j=0, k=0;
  // while (i<4)
  // {
  //   while (j<4)
  //   {
  //     cout<<"* ";
  //     j++;
  //   }
  //   cout<<endl;
  //   j=0;
  //   i++;
  // }
  // ----------------------------
  // while (i<3)
  // {
  //   while (j<3)
  //   {
  //     cout<<i;
  //     j++;
  //   }
  //   i++;
  //   j=0;
  //   cout<<endl;
  // }
  // ----------------------------
  // while (i<4)
  // {
  //   while (j<4)
  //   {
  //     cout<<j+1;
  //     j++;
  //   }
  //   i++;
  //   j=0;
  //   cout<<endl;
  // }
  // -----------------------------
  // while (i<4)
  // {
  //   while (j<4-i)
  //   {
  //     cout<<i+1;
  //     j++;
  //   }
  //   i++;
  //   j=0;
  //   cout<<endl;
  // }
  // -----------------------------
  int count=1;
  // while (i<3)
  // {
  //   while (j<3)
  //   {
  //     cout<<count;
  //     j++;
  //     count++;
  //   }
  //   i++;
  //   j=0;
  //   cout<<endl;
  // }
  // -----------------------------
  // while (i<4)
  // {
  //   while (j<i+1)
  //   {
  //     cout<<'*';
  //     j++;
  //   }
  //   i++;
  //   j=0;
  //   cout<<endl;
  // }
  // ----------------------------
  
    // i=4;
  // while (i<4)
  // {
  //   j=i+1;
  //   while (j>0)
  //   {
  //     cout<<j;
  //     j--;
  //   }
  //   i++;
  //   cout<<endl;
  // }
  // -----------------------------
  // while (i<3)
  // {
  //   while (j<3)
  //   {
  //     char ch = 'A' + i;
  //     cout<<ch;
  //     j++;
  //   }
  //   i++;
  //   j=0;
  //   cout<<endl;
  // }
  // -----------------------------
  // count=0;
  // while (i<3)
  // {
  //   while (j<3)
  //   {
  //     char ch = 'A'+count;
  //     cout<<ch;
  //     j++;
  //     count++;
  //   }
  //   i++;
  //   j=0;
  //   cout<<endl;
  // }
  // -----------------------------
  // while (i<3)
  // {
  //   while (j<3)
  //   {
  //     char ch = 'A'+i+j;
  //     cout<<ch;
  //     j++;
  //   }
  //   i++;
  //   j=0;
  //   cout<<endl;
  // }
  // -----------------------------
  // while (i<3)
  // {
  //   while (j<i+1)
  //   {
  //     char ch = 'A'+i;
  //     cout<<ch;
  //     j++;
  //   }
  //   i++;
  //   j=0;
  //   cout<<endl;
  // }
  // ----------------------------
  // while (i<4)
  // {
  //   while (j<i+1)
  //   {
  //     char ch='A'+i+j;
  //     cout<<ch;
  //     j++;
  //   }
  //   i++;
  //   j=0;
  //   cout<<endl;
  // }
  // ----------------------------
  // {
  //   i=4;
  //   while (i>0)
  //   {
  //     while (j+i<=4)
  //     {
  //       char ch='A'+i+j-1;
  //       cout<<ch;
  //       j++;
  //     }
  //     i--;
  //     j=0;
  //     cout<<endl;
  //   }
  // }
  // ----------------------------
  // {
  //   int n = valueN();
  //   while (i<n)
  //   {
  //     while (j<(n-1)-i)
  //     {
  //       cout<<" ";
  //       j++;
  //     }
  //     while (k<i+1)
  //     {
  //       cout<<'*';
  //       k++;
  //     }
  //     i++;
  //     j=0,
  //     k=0;
  //     cout<<endl;
  //   }  
  // }
  // ------------------------------
  // {
  //   int n = valueN();
  //   while (i<n)
  //   {
  //     while (j<n-i)
  //     {
  //       cout<<'*';
  //       j++;
  //     }
  //     i++;
  //     j=0;
  //     cout<<endl;
  //   }
  // }
  // ------------------------------
  // {
  //   int n = valueN();
  //   while (i<n)
  //   {
  //     while (j<i)
  //     {
  //       cout<<' ';
  //       j++;
  //     }
  //     while (k<n-i)
  //     {
  //       cout<<'*';
  //       k++;
  //     }
  //     i++;
  //     j=0;
  //     k=0;
  //     cout<<endl;
  //   }
  // }
  // --------------------------------
  {
    int n=valueN();
    int l=0, m=n;
    while (i<n)
    {
      while (j<n-i)
      {
        cout<<j+1;
        cout<<' ';
        j++;
      }
      j=0;

      while (k<i)
      {
        cout<<'*';
        cout << ' ';
        k++;
      }
      k=0;

      while (l<i)
      {
        cout<<"*";
        cout << ' ';
        l++;
      }
      l=0;

      while (m-i>0)
      {
        cout<<m-i;
        cout << ' ';
        m--;
      }
      m=n;

      i++;
      cout<<endl;
    }
    
  }
  return 0;
}
