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

  // Wave like Traversal
  // vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  // int nRows = 3, mCols = 4;
  // vector<int> ans;

  // for (int i = 0; i < mCols; i++)
  // {
  //   if (i & 1)
  //   {
  //     for (int j = nRows - 1; j >= 0; j--)
  //     {
  //       cout << arr[j][i]<<" ";
  //       ans.push_back(arr[j][i]);
  //     }
  //   }
  //   else
  //   {
  //     for (int j = 0; j < nRows; j++)
  //     {
  //       cout << arr[j][i]<<" ";
  //       ans.push_back(arr[j][i]);
  //     }
  //   }
  // }

  // print1DVector(ans);

  // Spiral Traversal of Matrix
  // vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  // vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  vector<vector<int>> matrix = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
  int nRows=matrix.size(), nCols=matrix[0].size(), count=0, nElements=nRows*nCols;
  cout<<nRows<<" "<<nCols<<endl;
  int row = 0, col = 0;
  while (count<nElements)
  {
    // LR Traversal
    for (; col < nCols; col++)
    {
      cout << matrix[row][col] << " ";
      count++;
    }
    row++;
    col--;
    // UD Traversal
    for (; row < nRows; row++)
    {
      cout << matrix[row][col] << " ";
      count++;
    }
    col--;
    row--;
    // RL Traversal
    int l = nCols % matrix[0].size();
    for (; col >= l; col--)
    {
      cout << matrix[row][col] << " ";
      count++;
    }
    col++;
    row--;
    // DU Traversal
    l = nRows % matrix.size();
    for (; row > l; row--)
    {
      cout << matrix[row][col] << " ";
      count++;
    }
    row++;
    col++;
    nCols--;
    nRows--;
  }
  
  

  return 0;
}
