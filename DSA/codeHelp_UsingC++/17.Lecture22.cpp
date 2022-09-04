#include<iostream>
#include<vector>
using namespace std;

void traverseArray(vector<string> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void traverseArray(string arr)
{
    for (int i = 0; i < arr.length(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void traverseArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void swap(char &a, char &b)
{
    char tmp=a;
    a=b;
    b=tmp;
    return;
}

void reverseString(vector<string> str){
    int i=0, j=str.size()-1;
    while (i<=j)
    {
        swap(str[i++], str[j--]);
    }
}

// void string_Alpha_Nums(string str){
//     if (str )
//     {
//         /* code */
//     }
    
// }

string alphaNumretic(string str){
    char c;
    string tmp;
    for (int i = 0; i < str.length(); i++)
    {
        c=str[i];
        if (c>='a' && c<='z' || c>='0' && c<='9')
        {
            tmp.push_back(c);
        }
    }
    return tmp;
}

string string_caseSensitive(string str){
    int length=str.length();
    for (int i = 0; i < length; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    return str;
}

bool isPalindrome(string str){
    int s=0, e=str.length()-1;
    while (s<e)
    {
        if (str[s]!=str[e])
        {
            return 0;
        }
        s++;e--;
    }
    return 1;
}

int main(){
// Reverse a String
    // vector<string> str;
    // string s="How are you!!!";
    // str.push_back(s);
    // traverseArray(str);
    // reverseString(str);
    // traverseArray(str);

// Check wheather a string is Palindrome or not
// incase-sensitive, no whitespaces, consider alphabet and numbers only
    // string str="2 21nNOO#   Nno!onN1@22";
    // string str="A man, a plan, a canal: Panama";
    // // int size
    // traverseArray(str);
    // str = string_caseSensitive(str);
    // str=alphaNumretic(str);
    // traverseArray(str);
    // if (isPalindrome(str))
    // {
    //     cout<<"It is Palindrome"<<endl;
    // }
    // else{
    //     cout<<"Not a Palindrome"<<endl;
    // }

// Maximum Occuring Character'
    // string str="Hello";
    // int arr[26]={0};
    // int index;
    // str=string_caseSensitive(str);
    // for (int i = 0; i < str.length(); i++)
    // {
    //     index=str[i]-'a';
    //     arr[index]++;
    // }
    // traverseArray(arr, sizeof(arr)/sizeof(int));
    // int max=0;
    // for (int i = 0; i < 26; i++)
    // {
    //     if (arr[max]<arr[i])
    //     {
    //         max=i;
    //     }
    // }
    // char c=max+'a';
    // cout<<"Max occuring char is: "<<c<<endl;

// Replace white space with '@40' in string
    string str="Nikhil Dhiman";
    string ans;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            // ans.push_back('@');
            // ans.push_back('4');
            // ans.push_back('0');
            ans.append("@40");
        }
        else{
            ans.push_back(str[i]);
        }
    }
    traverseArray(str);
    traverseArray(ans);

    // return ans;

    return 0;
}