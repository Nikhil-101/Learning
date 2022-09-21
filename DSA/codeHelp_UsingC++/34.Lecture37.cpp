#include<iostream>
#include<vector>

using namespace std;

void traverse(int arr[], int s, int e){
    for (int i = s; i <= e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void traverse(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void traverse(vector<string> str){
    for (int i = 0; i < str.size(); i++)
    {
        cout<<str[i]<<endl;
    }
    
}

void traverse(vector<vector<int>> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

void subSets(vector<int> arr, vector<int> output, int index, vector<vector<int>>& ans){
    if (index>=arr.size())
    {
        // traverse(output);
        ans.push_back(output);
        return;
    }
    // excluding
    subSets(arr, output, index+1, ans);

    // including
    output.push_back(arr[index]);
    subSets(arr, output, index+1, ans);
}

void subSequence(string str, int index, string output, vector<string>& ans){
    if (index>=str.length())
    {
        ans.push_back(output);
        return;
    }
    // exclude
    subSequence(str, index+1, output, ans);

    // include
    output+=(str[index]);
    subSequence(str, index+1, output, ans);
}

int main(){
    // int arr[]={1, 2, 3};
    // int size=sizeof(arr)/sizeof(int);
    // vector<vector<int>> ans;
    // vector<int> arr={1, 2, 3}, output;
    // int index=0;
    // subSets(arr, output, index, ans);
    // traverse(ans);

    string str="ABC";
    vector<string> ans;
    string output;
    int index=0;
 
    subSequence(str, index, output, ans);
    traverse(ans);

    return 0;
}