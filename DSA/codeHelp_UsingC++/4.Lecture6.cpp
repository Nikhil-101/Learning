#include<iostream>
#include<math.h>
using namespace std;

// int main(){{
//     int decimal = 100, bit, binary = 0, count = 0;
//     while (decimal)
//     {
//         bit = decimal & 1;
//         binary += (pow(10, count) * bit);
//         decimal >>= 1;
//         count++;
//     }
//     cout<<"Binary representation: "<<binary<<endl;
// }
//     return 0;
// }
// -ive number to binary (1-> 1's compliment 2-> 2's complement)
int main(){
    int num = 100, result, bit, binary = 0, count = 0;
    // while (tmp)
    // {
    //     tmp >>= 1;
    //     mask <<= 1;
    //     mask = mask|1;
    // }
    
    // result = ctmp & mask;
    // num = result;

    while (num)
    {
        bit = (num & 1)^1;
        // bit = bit^1;
        // if (bit == 1)
        // {
        //     binary += (pow(10, count) * 0);
        // }
        // else{
        binary += (pow(10, count) * bit);
        // cout<<binary;
        // }
        num >>= 1;
        count++;
    }
    // binary += 1;
    cout<<"Binary Representation: "<<binary<<endl;


    return 0;
}


// int main(){

//     return 0;
// }