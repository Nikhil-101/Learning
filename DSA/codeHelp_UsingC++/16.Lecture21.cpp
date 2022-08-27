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

void swap(int &a, int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
    return;
}

int main(){
    // vector<int> nums={1,2,3,4,5,6};
    vector<int> nums={-1};
    int k=7, size=nums.size();
    vector<int> tmp;

    for (int i = 0; i < k; i++)
    {
        tmp.push_back(nums[size-k+i]);
    }
    // traverseArray(tmp);
    for (int i = size-k-1,j=0; i >= 0; i--,j++)
    {
        nums[size-1-j]=nums[i];
    }
    // traverseArray(nums);
    for (int i = 0; i < k; i++)
    {
        nums[i]=tmp[i];
    }
    // traverseArray(nums);

    return 0;
}