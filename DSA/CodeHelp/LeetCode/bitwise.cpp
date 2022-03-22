#include<iostream>
#include<math.h>
using namespace std;

// PRINT out Bit representation of a number

// int main()
// {
//     int a = 10;
//     int bit = 0, ans = 0, i = 0;
//     while(a != 0)
//     {
//         bit = (a & 1);
//         ans = ans + (pow(10, i) * bit);
//         a = a >> 1;
//         i++;
//     }
//     cout << "Answer is: " << ans;
// }

// PRINT out Decimal representation of given bits

// int main()
// {
//     int a = 11, unit = 0, ans = 0, i = 0;
//     while (a != 0)
//     {
//         unit = a % 10;
//         ans = (pow(2, i) * unit) + ans;
//         a /= 10;
//         i++;
//     }
//     cout << "Decimal representation is: " << ans <<endl;
// }