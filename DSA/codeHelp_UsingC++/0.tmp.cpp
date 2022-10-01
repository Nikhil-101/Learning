#include<iostream>
#include<vector>
#include<map>
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
    // string s="abc";
    // cout<<s[0]<<endl;

    // vector<string> map={"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    // string str="23", output;
    // cout<<map[str[1]-1].length()<<endl;
    // cout<<str[0]-'0'<<endl;
    // cout<<map[str[0]-'0']<<endl;
    // cout<<6/2<<endl;

    map<int, bool> names;
    names[100]=true;

    cout<<names[101]<<endl;
    
    return 0;
}