#include<iostream>
#include<algorithm>
// #include<bits/stdc++.h>
using namespace std;
void printVV(vector<vector<int>> v){
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 0; j < v[i].size(); j++)
    {
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  return;
}

void printV(vector<int> v){
  for (int i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  return;
}

int main(){
  // SUM of 2
  // vector<int> arr={1, 2, 3, 4, 5};
  // vector<int> arr = {2, -3, 3, 3, -2};
  // int s=0;

  // vector<vector<int>> ans;
  // for(int i = 0; i < arr.size(); i++)
  // {
  //   for (int j = i + 1; j < arr.size(); j++)
  //   {
  //     if ((arr[i] + arr[j] == s) && i != j)
  //     {
  //       vector<int> sub;
  //       sub.push_back(arr[i]);
  //       if (arr[j] < arr[i])
  //       {
  //         sub.insert(sub.begin(), arr[j]);
  //       }
  //       else
  //       {
  //         sub.push_back(arr[j]);
  //       }
  //       ans.push_back(sub);
  //     }
  //   }
  // }
  // sort(ans.begin(), ans.end());
  // printV(ans);

  // 3SUM
  // vector<int> arr = {25, - 60, 26, 4, 15, 5, 2, 13};
  // int K=-30;
  // vector<vector<int>> ans;

  // // printV(arr);
  // int match = 0;
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   for (int j = i + 1; j < arr.size(); j++)
  //   {
  //     for (int k = j + 1; k < arr.size(); k++)
  //     {

  //       if (arr[i] + arr[j] + arr[k] == K)
  //       {
  //         vector<int> sub;
  //         if (ans.size() > 0)
  //         {
  //           for (int m = 0; m < ans.size(); m++)
  //           {
  //             int check = arr[i] ^ arr[j] ^ arr[k] ^ ans[m][0] ^ ans[m][1] ^ ans[m][2];
  //             if (check == 0)
  //             {
  //               match = 1;
  //             }
  //           }
  //         }
  //         if (match == 1)
  //         {
  //           match = 0;
  //           continue;
  //         }
  //         sub.push_back(arr[i]);
  //         sub.push_back(arr[j]);
  //         sub.push_back(arr[k]);
  //         ans.push_back(sub);
  //       }
  //     }
  //   }
  // }
  // printVV(ans);

  // Sort 012
  int arr[] = { 0, 1, 2, 2, 1, 0};
  int n=6;
  int num[3] = {0};
  for (int i = 0; i < n; i++)
  {
    num[arr[i]] += 1;
  }
  // arr = {0};
  int m = 0;
  for (int i = 0; i < 3; i++)
  {
    while (num[i] > 0)
    {
      arr[m] = i;
      m++;
      num[i] -= 1;
      cout << i;
    }
  }

  return 0;
}
