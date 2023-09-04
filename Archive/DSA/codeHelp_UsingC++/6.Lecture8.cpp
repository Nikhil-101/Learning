#include<iostream>
using namespace std;
// Required num of notes of a given balance
// int main(){
//     int balance = 199, hundred = 0, fifty = 0, twenty = 0, one = 0, expr, count;
//     switch (1)
//     {
//     case 1:
//         hundred = balance / 100;
//         balance %= 100;
//     case 2:
//         fifty = balance / 50;
//         balance %= 50;
//     case 3:
//         twenty = balance / 20;
//         balance %= 20;
//     case 4:
//         one = balance / 1;
//         balance %= 1;
//         break;
    
//     default:
//         cout<<"Default"<<endl;
//         break;
//     }
//     cout<<"Hundred: "<<hundred<<endl;   
//     cout<<"Fifty: "<<fifty<<endl;   
//     cout<<"Tweety: "<<twenty<<endl;   
//     cout<<"One: "<<one<<endl;   


//     return 0;
// }

// Find AP of 3n + 7
// int AP(int n){
//     return (3 * n) + 7;
// }

// int main(){
//     cout<<"Enter the number: ";
//     int n;
//     cin>>n;
//     cout<<"AP of given number is: "<<AP(n)<<endl;

//     return 0;
// }


// Total number of set bits(1) in a & b
// int set_Bits(int i){
//     int count = 0;
//     while (i)
//     {
//         if (i&1)
//         {
//             count++;
//         }
//         i >>= 1;
//     }
//     return count;
// }

// int main(){
//     int a = 2, b  = 3;
//     cout<<"Set Bits in a are: "<<set_Bits(a)<<endl;
//     cout<<"Set Bits in b are: "<<set_Bits(b)<<endl;

//     return 0;
// }



// Find nth Fibonacci Number
int fibonacci_number(int n){
    int first = 0, second = 1;
    if (n == 1)
    {
        return first;
    }
    else if (n == 2)
    {
        return second;
    }
    else if (n > 2)
    {
        int i = 3, nth_tern;
        while (i <= n)
        {
            nth_tern = first + second;
            first = second;
            second = nth_tern;
            i++;
        }
        return nth_tern;
    }
    else{
        cout<<"Undefined INPUT"<<endl;
        return -1;
    }
}

int main(){
    int n = 9;
    cout<<"The Fibonacci number at "<<n<<" position is: "<<fibonacci_number(n)<<endl;

    return 0;
}


// int main(){

//     return 0;
// }