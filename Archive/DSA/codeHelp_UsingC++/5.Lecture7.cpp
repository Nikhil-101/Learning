#include<iostream>
using namespace std;

// Reverse a 32-bit integer
// int main(){
//     int num = -54321, digit, rnum = 0;
//     while (num)
//     {
//         digit = num%10;
//         if (rnum > INT32_MAX/10 || rnum < INT32_MIN/10)
//         {
//             return 0;
//         }
        
//         rnum = (10 * rnum) + digit;
//         num /= 10;
//     }
//     cout<<"Reverse Number is: "<<rnum<<endl;

//     return 0;
// }

// 1's complement
// int main(){
//     int n = 1, mask = 0, tmp = n;
//     while (tmp)
//     {
//         tmp >>= 1;
//         mask <<= 1;
//         mask |= 1;
//     }
//     int ans = (~n) & mask;
//     if (n == 0)
//     {
//         ans = 1;
//     }
    
//     cout<<ans<<endl;

//     return 0;
// }

// Find wheather an integer is a Power of 2
int main(){
    int num = 1;
    // if (num <= 0 || num&1 && num > 1)
    // {
    //     cout<<"Not a power of 2"<<endl;
    //     return 0;
    // }
    
    // while (num)
    // {
    //     num /= 2;
    //     if (num&1 && num>1)
    //     {
    //         cout<<"Not a power of 2"<<endl;
    //         return 0;
    //     }
    // }
    // cout<<"It is a power of 2"<<endl;
// Upper one is lengthy
    if (num == 0)
    {
        cout<<"It isn't a power of 2"<<endl;
        return 0;
    }
    while (num != 1)
    {
        if (num%2 == 0)
        {
           num /= 2; 
        }
        else{
            cout<<"It isn't a power of 2"<<endl;
            return 0;
        }
    }
    cout<<"It is a power of 2"<<endl;
    return 1;
}



// int main(){

//     return 0;
// }