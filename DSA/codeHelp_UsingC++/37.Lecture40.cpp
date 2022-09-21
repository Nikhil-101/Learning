#include<iostream>
#include<vector>
using namespace std;
// Rat in Maze Problem
void traverse(vector<string>& ans){
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
}

bool isValid(vector<vector<int>>& m, int newx, int newy, vector<vector<int>>& visited){
    if ((newx>=0 && newx<m.size()) && (newy>=0 && newy<m.size()) && visited[newx][newy]==0 && m[newx][newy]==1)
    {
        return true;
    }
    return false;
}

void ratInMaze(vector<vector<int>>& m, int x, int y, vector<vector<int>>& visited, vector<string>& ans, string& path){
    if (x==m.size()-1 && y==m.size()-1)
    {
        ans.push_back(path);
        return;
    }
    // visited
    visited[x][y]=1;
    // finding path DLRU
    // down
    int newx=x+1;
    int newy=y;
    if(isValid(m, newx, newy, visited)){
        path.push_back('D');
        ratInMaze(m, newx, newy, visited, ans, path);
        path.pop_back();
    }
    // right
    newx=x;
    newy=y+1;
    if(isValid(m, newx, newy, visited)){
        path.push_back('R');
        ratInMaze(m, newx, newy, visited, ans, path);
        path.pop_back();
    }
    // left
    newx=x;
    newy=y-1;
    if(isValid(m, newx, newy, visited)){
        path.push_back('L');
        ratInMaze(m, newx, newy, visited, ans, path);
        path.pop_back();
    }
    // up
    newx=x-1;
    newy=y;
    if(isValid(m, newx, newy, visited)){
        path.push_back('U');
        ratInMaze(m, newx, newy, visited, ans, path);
        path.pop_back();
    }

    visited[x][y]=0;
}

int main(){
    vector<vector<int>> m = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    vector<string> ans;
    if (m[0][0]==0)
    {
        cout<<"Emtry Not Allowed!!!"<<endl;
        return 0;
    }
    
    vector<vector<int>> visited = m;
    for (int i = 0; i < visited.size(); i++)
    {
        for (int j = 0; j < visited[i].size(); j++)
        {
            visited[i][j]=0;
        }
    }
    int x=0, y=0;
    string path;
    cout<<"Starting..."<<endl;
    ratInMaze(m, x, y, visited, ans, path);
    traverse(ans);
    cout<<path<<endl;
    return 0;
}