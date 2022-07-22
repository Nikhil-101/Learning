#include<iostream>
using namespace std;
// Fibonacci Series
// int main(){
//     int f = 0, s = 1, n, result;
//     n = 3;
//     // if (n == 1)
//     // {
//     //     cout<<f<<endl;
//     // }
//     // else if (n == 2)
//     // {
//     //     cout<<f<<" "<<s<<endl;
//     // }
//     // else{
//     cout<<f<<" "<<s<<" ";
//     for (int i = 2; i < n; i++)
//     {
//         result = f + s;
//         f = s;
//         s = result;
//         cout<<result<<" ";
//     }
//     cout<<endl;
//     // }
    
//     return 0;
// }

// Subtraction of Product and Sum of digits of a number
// int main(){
//     int num = 999, sum = 0, product = 1, result, digit;
//     while (num)
//     {
//         digit = num%10;
//         num /= 10;
//         // cout<<"Digit: "<<digit<<" Num: "<<num<<endl;
//         sum += digit;
//         product *= digit;
//     }
//     result = product - sum;
//     cout<<"Result: "<<result<<endl;
    
//     return 0;
// }


int main(){
    int n = 6, count = 0;
    while (n)
    {
        if (n & 1)
        {
            count++;
        }
        n >>= 1;
    }
    cout<<"Number of 1 Bits: "<<count<<endl;
    return 0;
}


// int main(){


//     return 0;
// }