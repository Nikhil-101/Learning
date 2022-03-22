// lecture 7
#include<iostream>
#include<math.h>
using namespace std;

// Reverse a given number and return 0 if value surpass the limit of size of int32

// int main()
// {
//     int number = 1234;
//     int unit = 0, answer = 0, i=0;
//         while (number != 0)
//         {
//             unit = number % 10;
//             if( (answer < INT32_MIN/10) || (answer > INT32_MAX/10))
//             {
//                 return 0;
//             }
//             answer = (10*answer) + unit;
//             number /= 10;
//             i++;
//         }
//         cout << "Reversed number is: " << answer << endl;
//     else{
//         return 0;
//     }
// }

// Complement of base 10 integer
// 1st Method
// int main()
// {
//     int number = 5;
//     int a = number, a_saved = number;
//     int ans_Bits = 0, i = 0, bit = 0, ans = 0, c_bit = 0;
//     while(a != 0)
//     {
//         bit = !(a & 1);
//         ans_Bits = (pow(10, i)*bit) + ans_Bits;
//         ans = (pow(2, i)*bit) + ans;
//         a >>= 1;
//         i++;
//     }
//     // int tmp = answ^1;
//     // cout << tmp << endl;
//     cout << "Bits of " << a_saved << " complement are: " << ans_Bits << endl;
//     cout << "Complement of " << a_saved << " is: " << ans << endl;
// }

// 2nd Method
// int main()
// {
//     int number = 7;
//     int c_number = ~number;
//     int mask = 0;
//     while (number != 0)
//     {
//         number >>= 1;
//         mask <<= 1;
//         mask |= 1;
//     }
//     cout << c_number & mask << endl;
// }

// Integer is power of 2 ?

// int main()
// {
//     int number = 32;
//     if(number == 0)
//     {
//         cout << "Please INPUT larger number";
//         return false;
//     }
//     while(number != 1)
//     {
//         if(number%2 == 0)
//         {
//             number /= 2;
//         }
//         else{
//             cout << "It is not a power of 2 ";
//             return false;
//         }
//     }
//     cout << "Its is power of 2";
//     return 0;
// }