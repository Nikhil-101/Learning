#include<iostream>
#include<string.h>
using namespace std;

// **Print weather the given string is Palindrome or Not**

bool isPalindrome(string s){
    if (s.length() == 0 || s.length() == 1)
    {
        return true;
    }
    if (s[0] == s[s.length() - 1])
    {
        return isPalindrome(s.substr(1, s.length() - 2));
    }
    
    return false;
}

int main(){
    cout<<"Check weather a string is Palindrome or not!!!"<<endl;
    string s = "1221221";
    if (isPalindrome(s))
    {
        cout<<"Given String is a Palindrome"<<endl;
    }
    else{
        cout<<"Given String is not a Palindrome"<<endl;
    }

    return 0;
}