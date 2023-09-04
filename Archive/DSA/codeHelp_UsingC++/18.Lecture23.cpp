#include<iostream>
#include<vector>
using namespace std;

void traverseArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void traverseArray(vector<vector<int>> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

int main(){
    
// Row wise sum in 2D array && highest among rows sum
    // int arr[3][3] = {{11,22,33}, {4,5,6}, {7,8,9}};
    // int sum, high_sum=INT32_MIN;
    // for (int i = 0; i < 3; i++)
    // {
    //     sum=0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum+=arr[i][j];
    //     }
    //     cout<<"Sum of row "<<i+1<<" : "<<sum<<endl;
    //     if (high_sum<sum)
    //     {
    //         high_sum=sum;
    //     }
    // }
    // cout<<"Highest Sum in amoung rows is: "<<high_sum<<endl;


// Print like a wave
    // int nRows=3, nCols=3;
    // vector<int> ans;
    // for (int col = 0; col < nCols; col++)
    // {
    //     int i=0;
    //     for (int row = 0; row < nRows; row++)
    //     {
    //         if (col&1)
    //         {
    //             ans.push_back(arr[row+2-i][col]);
    //             i+=2;
    //         }
    //         else{
    //             ans.push_back(arr[row][col]);
    //         }
    //     }
    //     // cout<<endl;
    // }
    // traverseArray(ans);


// Spiral Matrix

    // vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}, {13,14,15,16}};
    // // vector<vector<int>> matrix={{1}, {2}, {3}};
    // vector<int> ans;
    // int rows=matrix.size();
    // int cols=matrix[0].size();

    // int total=rows*cols, count=0;
    // while (total>0)
    // {
    //     for (int i = count; i < count+1; i++)
    //     {
    //         for (int j = count; j < cols-count; j++)
    //         {
    //             ans.push_back(matrix[i][j]);
    //             total--;
    //             cout<<total<<endl;
    //         }
    //     }
    //     if (total<=0){
    //         break;
    //     }
        
    //     count++;
    //     for (int i = count; i < rows-count+1; i++)
    //     {
    //         for (int j = cols-count; j < cols-count+1; j++)
    //         {
    //             ans.push_back(matrix[i][j]);
    //             total--;
    //             cout<<total<<endl;
    //         }
    //     }
    //     if (total<=0){
    //         break;
    //     }
    //     for (int i = rows-count; i < rows-count+1; i++)
    //     {
    //         for (int j = cols-1-count; j >= count-1; j--)
    //         {
    //             ans.push_back(matrix[i][j]);
    //             total--;
    //             cout<<total<<endl;
    //         }
    //     }
    //     if (total<=0){
    //         break;
    //     }
    //     for (int i = rows-1-count; i >= count; i--)
    //     {
    //         for (int j = count-1; j < count; j++)
    //         {
    //             ans.push_back(matrix[i][j]);
    //             total--;
    //             cout<<total<<endl;
    //         }
    //     }
    // }
    //     // if (total<=0){
    //     //     break;
    //     // }
    // traverseArray(ans);


// Rotate Image/2D Array to 90deg
    // vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};

    // int n = matrix.size();
    // traverseArray(matrix);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         swap(matrix[j][i], matrix[i][j]);
    //     }
    // }
    // traverseArray(matrix);

    // for (int i = 0; i < n; i++)
    // {
    //     int sCol=0, eCol=n-1;
    //     while (sCol<eCol)
    //     {
    //         swap(matrix[i][sCol], matrix[i][eCol]);
    //         sCol++;
    //         eCol--;
    //     }
    // }
    // cout<<"Ans: "<<endl;
    // traverseArray(matrix);

    // int n = matrix.size();
        
    //     int startingcol = 0;
    //     int endingcol = n-1;
       
    //    traverseArray(matrix);
    //    cout<<"Swapping: "<<endl;
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             swap(matrix[i][j], matrix[j][i]);
    //             cout<<"i,j: "<<i<<" "<<j<<endl;
    //             cout<<"j,i: "<<j<<" "<<i<<endl;
    //             traverseArray(matrix);
    //             cout<<endl;
    //         }
    //     }
        
    //     traverseArray(matrix);
    //     for(int i=0;i<n;i++){
    //         startingcol = 0;
    //         endingcol = n-1;
    //         while(startingcol < endingcol){
    //             swap(matrix[i][startingcol], matrix[i][endingcol]);
    //             startingcol++;
    //             endingcol--;
    //         }
    //     }
        
        // traverseArray(matrix);
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<matrix[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    
// Search a 2D Matrix 1
    // vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    // vector<vector<int>> matrix={{1}};
    // int target=0;
    // int nRows=matrix.size(), nCols=matrix[0].size();

    // int s=0, e=nRows*nCols-1, mid;

    

    // while (s<=e)
    // {
    //     mid=s+(e-s)/2;
    //     cout<<mid<<endl;
    //     if (target==matrix[mid/nCols][mid%nCols])
    //     {
    //         cout<<"Found at: "<<mid/nCols<<", "<<mid%nRows<<endl;
    //         return 0;
    //     }
        
    //     else if (target<=matrix[mid/nCols][mid%nCols])
    //     {
    //         e=mid-1;
    //     }
    //     else{
    //         s=mid+1;
    //     }
    // }
    // cout<<"Not Found"<<endl;


// Search a 2D Matrix 2
    vector<vector<int>> matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target=23;
    int nRow=matrix.size(), nCol=matrix[0].size();

    int r=0, c=nCol-1, mid;
    while (r<nRow && c>=0)
    {
        if (target==matrix[r][c])
        {
            cout<<"Found at: "<<r<<", "<<c<<endl;
            return 1;
        }
        else if (target<matrix[r][c])
        {
            c--;
        }
        else{
            r++;
        }
    }
    
    cout<<"Not Found"<<endl;

    return 0;
}