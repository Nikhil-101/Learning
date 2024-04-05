#include<iostream>
#include<algorithm>

using namespace std;

void printA(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void printA(vector<int>& arr){
  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"endl"<<endl;
}

int main(){
  // find max and min value
  // int arr[9] = {4, 6, 2, 6, 7, 8, 5, -5, -2};
  // int size = sizeof(arr)/sizeof(int), min=arr[0], max=arr[0];

  // for (int i = 0; i < size; i++)
  // {
  //   if (min>arr[i])
  //   {
  //     min = arr[i];
  //   }
  //   if (max<arr[i])
  //   {
  //     max = arr[i];
  //   }
  // }
  
  // cout<<"Min: "<<min<<endl;
  // cout<<"Max: "<<max<<endl;
  
  // Sum of all the elements in an array
  // int arr[5] = {4, 6, 4, 2, -5}, sum=0;
  // for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
  // {
  //   sum+=arr[i];
  // }
  
  // cout<<"Sum: "<<sum<<endl;

  // Linear Search
  // int arr[5] = {4, 6, 4, 2, -5}, num;
  // cout<<"Enter num: ";
  // cin>>num;
  // for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
  // {
  //   if(num==arr[i]){
  //     cout<<"Found at index "<<i<<" with value of "<<arr[i]<<endl;
  //     break;
  //   }
  // }
  
  // Reverse an array
  // int arr[2] = {3, 6};
  // int size = sizeof(arr)/sizeof(int);

  // for (int i = 0; i < size/2; i++)
  // {
  //   int tmp = arr[i];
  //   arr[i] = arr[size-1-i];
  //   arr[size-1-i] = tmp;
  // }
  
  // for (int i = 0; i < size; i++)
  // {
  //   cout<<arr[i]<<" ";
  // }
  // cout<<endl;
  
  // Swap alternate elements
  // int arr[5] = {1, 2, 3, 4, 5};
  // int size = sizeof(arr) / sizeof(int);

  // for (int i = 0; i < size-1; i+=2)
  // {
  //   int tmp = arr[i];
  //   arr[i] = arr[i+1];
  //   arr[i+1] = tmp;
  // }
  
  // printA(arr, size);

  // Find Duplicate in array
  // int arr[6] = {1, 5, 2, 1, 5, 1};
  // int size = sizeof(arr) / sizeof(int);
  
  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = i+1; j < size; j++)
  //   {
  //     if(arr[i] == arr[j]){
  //       cout<<"Duplicate found of "<<arr[i]<<endl;
  //       break;
  //     }
  //   }
  // }
  vector<int> nums = { 4, 3, 2, 7, 8, 2, 3, 1 };
  vector<int> ans;
  int arr[100000]={0};
  for (int i = 0; i < nums.size(); i++)
  {
    arr[nums[i]] += 1;
    if (arr[nums[i]] > 1)
    {
      ans.push_back(nums[i]);
    }
  }
  
  printA(ans);
  // Find array intersection
  // int arr1[6] = {1, 2, 3, 4, 5, 6};
  // int arr2[6] = {3, 4, 5, 6, 7, 8};
  // int size1 = sizeof(arr1) / sizeof(int);
  // int size2 = sizeof(arr2) / sizeof(int);

  // for (int i = 0; i < size1; i++)
  // {
  //   for (int j = 0; j < size2; j++)
  //   {
  //     if (arr1[i] == arr2[j])
  //     {
  //       cout<<"Met intersection at arr1 of "<<i<<" & arr2 of "<<j<<endl;
  //       // i++;
  //     }
  //   }
  // }

  return 0;
}
