#include<iostream>
using namespace std;
// This program contains ASCII values and compare them to the required ranges of char string
// int main(){
//     cout<<"Enter a character: ";
//     char val = '6';
//     cout<<val<<endl;
//     if (48 <= val && val <= 57)
//     {
//         cout<<"Char is of range '1 - 9'"<<endl;
//     }
//     else if (65 <= val && val <= 90)
//     {
//         cout<<"Char is o'f range 'A - Z'"<<endl;
//     }
//     else if (97 <= val && val <= 122)
//     {
//         cout<<"Char is of range 'a - z'"<<endl;
//     }
//     else{
//         cout<<"Unknown Character!!!"<<endl;
    // }


    // return 0;
// }
// ------------------------------------------------------------------------------------------------------
// SUM of n even numbers
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     int i = 0;
//     int even = 2;
//     int sum = 0;
//     while (i < n)
//     {
//         sum += even;
//         even += 2;
//         i++;
//     }
//     cout<<"Sum of even numbers are: "<<sum<<endl;

//     return 0;
// }
// ------------------------------------------------------------------------------------------------------
// Find that given number is prime or not
int main(){
    int n;
    bool isit = 1;
    cout<<"Enter number: ";
    cin>>n;
    int i = 2;
    while (i < n)
    {
        if (n%i == 0)
        {
            isit = 0;
            break;
        }
        i++;
    }
    if (isit)
    {
        cout<<"It is Prime Number"<<endl;
    }
    else{
        cout<<"Not a Prime Number"<<endl;
    }

    return 0;
}