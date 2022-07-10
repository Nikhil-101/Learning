#include<iostream>
#include<string.h>
using namespace std;

//  **Reversing String using 2 Methods**

// void RString(int i = 0){
//     string s = "Hello, How are you???";

//     if (s[i] == '\0')
//     {
//         return;
//     }
//     RString(i + 1);
//     cout<<s[i];
// }

void RString(string s){
    if (s.length() == 0)
    {
        return;
    }
    RString(s.substr(1, s.length() - 1));
    cout<<s[0];
}


int main()
{
    cout<<"Reversing String Program"<<endl;
    string s = "Hello, How are you???";
    RString(s);
    cout<<endl;
    return 0;
}