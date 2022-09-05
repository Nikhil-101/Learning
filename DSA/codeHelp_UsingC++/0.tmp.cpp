#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
    return;
}

void traverseArray(vector<int> arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    // int a = 123;
    // int b = a%10;
    // a = a/10;
    // cout<<a<<" "<<b<<endl;

    // int n = 11;
    // bool tmp = n & 1;
    // cout<<tmp<<endl;
    // n = n >> 1;
    // tmp = n & 1;
    // cout<<tmp<<endl;
    // n = n >> 1;
    // tmp = n & 1;
    // cout<<tmp<<endl;

    // int a = 2;
    // int b = a^1;
    // cout<<(a&1)<<endl;
    // cout<<b<<endl;

    // vector<int> arr={1, 2, 3, 4, 5, 6};
    // int size=arr.size();
    // int m = 3;
    // int l=m+1, r=size-1;
    // int range=(size-m)/2;
    // traverseArray(arr, size);
    // for (int i = 0; i < range; i++,l++,r--)
    // {
    //     swap(arr[l], arr[r]);
    // }
    // traverseArray(arr, size);
    // for (int i = 1; i < 50; i++)
    // {
    //     cout<<i%5<<" ";
    // }
    // cout<<endl;

    // string s="abcabcabc";
    // int k=1;
    // cout<<s.length()<<endl;
    // for (int  i = 1; s[i]!='\0'; i++)
    // {
    //     s[i]=s[i+1];
    // }
    // cout<<s<<endl;
    // s[2]=s[3];
    // cout<<s.length()<<endl;
    int i=6;
    char c='0'+ i;
    cout<<c<<endl;
    return 0;
}