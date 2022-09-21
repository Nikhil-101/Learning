#include<iostream>
#include<vector>
using namespace std;

void traverse(vector<string>& str){
    for (int i = 0; i < str.size(); i++)
    {
        cout<<str[i]<<endl;
    }   
}

void letterCombinations(string str, int index, string output, vector<string>& ans, vector<string>& map){
    if (index>=str.length())
    {
        ans.push_back(output);
        return;
    }
    for (int i = 0; i < map[str[index]-'0'].length(); i++)
    {
        output.push_back(map[str[index]-'0'][i]);
        letterCombinations(str, index+1, output, ans, map);
        output.pop_back();
    }
    
}

int main(){
    vector<string> map={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string str="23", output;
    vector<string> ans;
    int index=0;
    letterCombinations(str, index, output, ans, map);
    traverse(ans);


    return 0;
}