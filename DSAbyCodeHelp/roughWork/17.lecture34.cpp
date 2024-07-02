// #include<iostream>
#include "000.functins.h"
// using namespace std;


// Print Reverse String
void reverseString(string s, int index=0){
  if(s[index]=='\0'){
    return;
  }
  reverseString(s, index+1);
  cout<<"Reverse String: "<<s[index]<<endl;
}

// Palindrome Checking
bool checkPalindrome(string s, int front, int rear){
  if(front>=rear){
    return 1;
  }
  if(s[front]!=s[rear]){
    return 0;
  }
  return checkPalindrome(s, front+1, rear-1);
}

// Exponent (Inefficient but easy)
int findExponent(int a, int b){
  if(b<=0){
    return 1;
  }
  return a * findExponent(a, b-1);
}

// Exponent using Efficient way
int findExponent2(int a, int b){
  if(b==0){
    return 1;
  }
  if(b==1){
    return a;
  }

  int ans = findExponent2(a, b/2);

  if(b%2==0){
    return ans * ans;
  }
  else{
    return a * ans * ans;
  }
}

void bubbleSort(int* arr, int size, int front, int rear){
  if(rear==0){
    return;
  }
  if(front>=rear){
    bubbleSort(arr, size, 0, rear-1);
    return;
  }
  if(arr[front]>arr[front+1]){
    swap(arr[front], arr[front+1]);
    bubbleSort(arr, size, front+1, rear);
    return;
  }
  else{
    bubbleSort(arr, size, front+1, rear);
    return;
  }
}

int main(){
  // Reverse String
  string s = "abcde";
  reverseString(s);

  // Palindrome Check
  string s1="aabbbcddcddcbbbaa";
  cout<<"Palindrome: "<<checkPalindrome(s1, 0, s1.length()-1)<<endl;

  // Exponent Multiplication i.e. find a^b
  int a=2, b=10;
  cout<<"Value: "<<findExponent(a, b)<<endl;
  cout<<"Value: "<<findExponent2(a, b)<<endl;

  // Bubble Sort
  int arr[] = {1, 5, 7, 3, 4, 2};
  // int arr[] = {1, 7, 4};
  int size = sizeof(arr)/sizeof(int);
  print1DArray(arr, size);
  bubbleSort(arr, size, 0, size-1);
  cout<<"Bubble Sort: "<<endl;
  print1DArray(arr, size);

  return 0;
}
