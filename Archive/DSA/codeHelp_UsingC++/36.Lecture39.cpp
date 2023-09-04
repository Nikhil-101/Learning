#include<iostream>
#include<vector>
using namespace std;

void traverse(vector<string>& str){
    for (int i = 0; i < str.size(); i++)
    {
        cout<<str[i]<<endl;
    }   
}

void permutatuions(string str, int index, string output, vector<string>& ans){
    if (index>=str.length())
    {
        cout<<output<<endl;
        ans.push_back(output);
        return;
    }
    // for (int i = 0; i < str.length(); i++)
    // {
    //     output.push_back(str[index]);
    //     permutatuions(str, index+1, output, ans);
    //     output.pop_back();
    // }
    
}

int main(){
    string str="abc";
    vector<string> ans;
    string output;
    int index;
    permutatuions(str, index, output, ans);
    traverse(ans);


    return 0;
}