#include<iostream>
using namespace std;
// Recursion

void swap(char& c1, char& c2)
{
    char tmp=c1;
    c1=c2;
    c2=tmp;
    return;
}

void swap(int& a, int& b){
    int tmp=a;
    a=b;
    b=tmp;
    return;
}

void traverse(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseString(string& str, int s, int e){
    if (s>=e)
    {
        return;
    }
    swap(str[s], str[e]);
    reverseString(str, s+1, e-1);
}

bool checkPalindrome(string str, int i, int j){
    if (i>=j)
    {
        return 1;
    }
    if (str[i]!=str[j])
    {
        return 0;
    }
    return checkPalindrome(str, i+1, j-1);
}

int powerof2(int a, int b){
    if (b==0)
    {
        return 1;
    }
    return a*powerof2(a, b-1);
}

int powerof2e(int a, int b){
    if (b==0)
    {
        return 1;
    }
    if (b&1)
    {
        // a*=a;
        return a*powerof2e(a, (b-1)>>1)*powerof2e(a, (b-1)>>1);
    }
    else{
        // a*=a*a;
        return powerof2e(a, b>>1)*powerof2e(a, b>>1);
    }
}
// alternative of above & probably more efficient
int powerofAnye(int m, int n){
    if (n==0)
    {
        return 1;
    }
    if (n==1)
    {
        return m;
    }
    int ans=powerofAnye(m, n>>1);
    if (n&1)
    {
        return m*ans*ans;
    }
    else{
        return ans*ans;
    }
}

int sortBubble(int arr[], int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    sortBubble(arr, n-1);
    return 1;
}

int main(){
// Reverse given string using recursion
    // string str="abcde";
    // cout<<str<<endl;
    // reverseString(str, 0, str.length()-1);
    // cout<<str<<endl;

// Check Palindrome
    // string str="srrrreeeyrrrrs";
    // cout<<checkPalindrome(str, 0, str.length()-1)<<endl;

// Power of 2 (Inefficient)
    // int a=2, b=10;
    // cout<<powerof2(a, b)<<endl;

// Power of 2 (Efficient)
    // int a=2, b=10;
    // cout<<powerof2e(a, b)<<endl;

// Bubble Sort
    int arr[]={6, 5, 9, 2, 4, 8, 1};
    int size=sizeof(arr)/sizeof(int);
    traverse(arr, size);
    sortBubble(arr, size);
    traverse(arr, size);

    return 0;
}