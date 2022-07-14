#include<iostream>
#include<vector>
using namespace std;

// this vector is similar to arrays and is a part of STL library
// can search for all the available function of vectors

template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(12);
    display(v1);

    vector<char> v2;
    v2.push_back('N');
    v2.push_back('S');
    v2.push_back('C');
    v2.push_back('A');
    v2.push_back('S');
    display(v2);
    // for Inserting the element in vector
    vector<char>::iterator itr = v2.begin();
    v2.insert(itr+2, 'N');
    display(v2);

    return 0;
}