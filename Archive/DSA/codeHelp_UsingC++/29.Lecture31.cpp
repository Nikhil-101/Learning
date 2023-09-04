#include<iostream>
#include<math.h>
using namespace std;
// Recursion

int factorial(int n){
    if (n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int powerof2(int n){
    if (n==0)
    {
        return 1;
    }
    return 2*powerof2(n-1);
}

int rCounting(int n){
    if (n==0)
    {
        return 1;
    }
    cout<<n<<" ";
    rCounting(n-1);
    return 0;
}

int Counting(int n){
    if (n==0)
    {
        return 1;
    }
    Counting(n-1);
    cout<<n<<" ";
    return 0;
}

int fibonacci(int n){
    if (n<=0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }

    
    // m++;
    return fibonacci(n-1)+fibonacci(n-2);
    // return 0;
}

int cStairs(int n){
    if (n<0)
    {
        return 0;
    }
    else if (n==0)
    {
        return 1;
    }
    return cStairs(n-1)+cStairs(n-2);
}

int sayDigit(int n, string arr[]){
    if (n==0)
    {
        return 0;
    }
    sayDigit(n/10, arr);
    cout<<arr[n%10]<<" ";
    return 0;
}

int main(){
// Find factorial through resursion
    // int n=5;
    // cout<<"Factorial of "<<n<<" is: "<<factorial(n)<<endl;

// Find 2^n
    // int n=10;
    // cout<<powerof2(n)<<endl;
    
// Reverse Counting
//     int n=10;
//     rCounting(n);
//     cout<<endl;

// Counting
//     // int n=10;
//     Counting(n);
//     cout<<endl;

// nth fibonacci number
    // int n=5;
    // cout<<fibonacci(n);
    // cout<<endl;

// Count Ways To Reach The N-th Stairs
    // int n=5;
    // cout<<cStairs(n)<<endl;

// Say Digits name
    // int n=5109;
    // string arr[]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // sayDigit(n, arr);
    // cout<<endl;
    return 0;
}