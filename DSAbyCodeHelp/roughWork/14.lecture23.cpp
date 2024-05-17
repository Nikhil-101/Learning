#include "000.functins.h"

int main()
{
  // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int high=INT32_MIN;
  // // Sum of all rows of 2D Array && Largest Row Sum
  // for (int i = 0; i < 3; i++)
  // {
  //   int sum=0;
  //   for (int j = 0; j < 3; j++)
  //   {
  //     sum+=arr[i][j];
  //   }
  //   cout<<"Sum of Row "<<i+1<<" is: "<<sum<<endl;
  //   if (high<sum)
  //   {
  //     high=sum;
  //   }
  // }
  // print2DArrayx3(arr, 3, 3);
  // cout<<"Highest Value of Sum of row is: "<<high<<endl;

  vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  int nRows = 3, mCols = 4;
  vector<int> ans;

  for (int i = 0; i < mCols; i++)
  {
    if (i & 1)
    {
      for (int j = nRows - 1; j >= 0; j--)
      {
        cout << arr[j][i]<<" ";
        ans.push_back(arr[j][i]);
      }
    }
    else
    {
      for (int j = 0; j < nRows; j++)
      {
        cout << arr[j][i]<<" ";
        ans.push_back(arr[j][i]);
      }
    }
  }

  print1DVector(ans);

  return 0;
}
