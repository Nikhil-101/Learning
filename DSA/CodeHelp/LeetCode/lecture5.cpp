#include<iostream>
using namespace std;


// Ques 1: SUM & PRODUCT of digits of a number

// int main()
// {
//     int number = 234;
//     int pro = 1;
//     int sum = 0;

//     while (number != 0)
//     {
//         int unitNumber = number % 10;
//         pro *= unitNumber;
//         sum += unitNumber;

//         number /= 10;
//     }
//     cout << "Product is: " << pro << endl << "Sum is: " << sum << endl;
//     cout << "Result is: " << pro - sum;
// }

//Ques 2: COUNT the number of 1 bits of a number

// int main() {
//     int number = 7;
//     int count = 0;
//     while(number != 0){
//         if(number & 1){
//             count++;
//         }
//         number >>= 1;
//         cout << number <<endl;
//     }
//     cout << "No. of 1's bit are: " << count;
// }