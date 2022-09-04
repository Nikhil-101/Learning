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
// Rotate an array
    // vector<int> nums={1,2,3,4,5,6};
    // vector<int> nums={-1};
    // int k=7, size=nums.size();
    // vector<int> tmp;

    // k%=size;
    // for (int i = 0; i < k; i++)
    // {
    //     tmp.push_back(nums[(size-(k)+i)]);
    // }
    // traverseArray(tmp);
    // for (int i = size-k-1; i >= 0; i--)
    // {
    //     nums[i+k]=nums[i];
    // }
    // traverseArray(nums);
    // for (int i = 0; i < k; i++)
    // {
    //     nums[i]=tmp[i];
    // }
    // traverseArray(nums);

// Find sum of 2 Arrays
    vector<int> a={1, 2, 3};
    vector<int> b={1,1,1};
    int n=a.size();
    int m=b.size();
    int a_int=0, b_int=0, sum;
    
    for(int i=0;i<n;i++){
        a_int=10*a_int+a[i];
    }
    for(int i=0;i<m;i++){
        b_int=10*b_int+b[i];
    }
    sum=a_int+b_int;
    vector<int> sum_arr;
    
    while(sum!=0){
        int digit=sum%10;
        sum/=10;
        vector<int>::iterator it=sum_arr.begin();
        sum_arr.insert(it, digit);
    }
    traverseArray(sum_arr);

    return 0;
}