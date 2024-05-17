#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// string modifyString(string s)
// {
//   string str;
//   for (int i = 0; i < s.length(); i++)
//   {
//     char ch = s[i];
//     if (48 <= ch && ch <= 57)
//     {
//       str += ch;
//     }
//     else if (65 <= ch && ch <= 90)
//     {
//       str += (char)(ch + 32);
//     }
//     else if (92 <= ch && ch <= 122)
//     {
//       str += ch;
//     }
//   }
//   cout<<str<<endl;
//   return str;
// }
// bool checkPalindrome(string s)
// {
//   // Write your code here.
//   int size = s.length(), start = 0, end = size - 1;
//   bool ans = true;
//   s = modifyString(s);
//   cout<<s<<endl;
//   end=s.length()-1;
//   while (start < end)
//   {
//     if (s[start++] != s[end--])
//     {
//       ans = false;
//       return false;
//     }
//   }
//   return true;
// }

int main(){
  // string s="abvvba @()";
  // // cout<<checkPalindrome(s)<<endl;

  // map<char, int> m;
  // for (int i = 0; i < s.length(); i++)
  // {
  //   m[s[i]]+=1;
  // }
  
  // for(auto p:m){
  //   cout<<p.first<<" "<<p.second<<endl;
  // }cout<<endl;
  // cout<<m.at()<<endl;

  // string str = "abcdefabcdef";
  // string str = "abcdefabcdef";

  // map<char, int> m;

  // for (int i = 0; i < str.length(); i++)
  // {
  //   m[str[i]] += 1;
  // }
  // char currentArg;
  // int currentMax = 0;
  // string str;
  // str.erase()

  // map<char, int>::iterator itr = m.begin();
  // for (; itr != m.end(); itr++)
  // {
  //   if (itr->second > currentMax)
  //   {
  //     currentArg = itr->first;
  //     currentMax = itr->second;
  //   }
  // }
  // cout<<"Hello"<<endl;
  // cout << currentArg << endl;

  string s = "daabcbaabcbc", part = "abc", str;
  int count = 0;
  for (int i = 0; i < s.length(); i++)
  {
    for (int j = 0; j < part.length(); j++)
    {
      if (s[i] == part[j])
      {
        str.push_back(s[i]);
        count++;
        i++;
        if (count == part.length())
        {
          for (int m = 0; m < part.length(); m++)
          {
            str.pop_back();
          }
          count = 0;
        }
        continue;
      }
      count = 0;
      str.push_back(s[i]);
      break;
    }
    s = str;
  }
}
