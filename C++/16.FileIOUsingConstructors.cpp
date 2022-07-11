#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s1, s2, s3;
    s1 = "Nikhil Dhiman";
// Output File Stream helps to prints the contents to the file
// ḥere, ofstream is a class & out is the object with sending parameter to its constructors
    ofstream out("textFiles/FileIO.txt");
    // cin>>s1;
    out<<s1;
    cout<<"Written Succesfully"<<endl;
    out.close();
// Input File Stream helps to read the contents of a file
// ḥere, ifstream is a class & in is the object with sending parameter to its constructors
    ifstream in("textFiles/FileIO.txt");
    // in>>s2;
    // cout<<s2<<endl;
    getline(in, s2);
    cout<<s2<<endl;
    cout<<"Read Succesfully"<<endl;
    in.close();

    return 0;
}