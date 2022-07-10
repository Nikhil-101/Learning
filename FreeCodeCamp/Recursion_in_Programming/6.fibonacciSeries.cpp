#include<iostream>
using namespace std;

// **Displays Fibonacci Series Numbers**

int fSeries(int n){
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fSeries(n-1) + fSeries(n-2);
}

// int displayFibonacci(int num){
//     if (num == 0)
//     {
//         cout<<num;
//         return;
//     }
//     displayFibonacci(num-1);

//     displayFibonacci(num-2);
// }

int main(){
    int num = 10;
    cout<<fSeries(num)<<endl;

    return 0;
}