#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s;
    ofstream out;
    out.open("textFiles/FileIO.txt");
    out<<"This is Nikhil Dhiman\n";
    out<<"I am a Developer\n";
    out<<"I know multiple Programming languages";
    out.close();

    ifstream in;
    in.open("textFiles/FileIO.txt");
    // in>>s;
    while (in.eof() == 0)
    {
        getline(in, s);
        cout<<s<<endl;
    }

    return 0;
}