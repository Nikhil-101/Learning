#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

// **Convert Decimal number into Binary number**

// void dectoBinary(int n){
//     int bit = 0;
//     if (n == 1 || n == 0)
//     {
//         cout<<n%2;
//         return;
//     }
//     bit = n%2;
//     dectoBinary(n/2);
//     cout<<bit;
//     return;
// }

// void dectoBinary(int n){
//     int bit = 0;
//     int div = n/2;
//     if (div == 0)
//     {
//         cout<<n%2;
//         return;
//     }
//     bit = n%2;
//     dectoBinary(div);
//     cout<<bit;
//     return;
// }

// INCOMPLETE
string dectoBinary(int n, string bit){
    int div = n/2;
    if (div == 0)
    {
        // cout<<n%2;
        return bit;
    }
    bit += to_string(div%2);
    return dectoBinary(div, bit);
    // cout<<bit<<endl;
    // return bit;
}


int main(){
    int num = 233;
    cout<<dectoBinary(num, "");
    cout<<endl;

    return 0;
}