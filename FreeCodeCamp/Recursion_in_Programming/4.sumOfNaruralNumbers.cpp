#include<iostream>
using namespace std;

// int SUMofNatural(int n, int sum = 0){
//     if (n <= 0)
//     {
//         cout<<"SUM is "<<sum<<endl;
//         return sum;
//     }
//     sum += n;
//     return SUMofNatural(n - 1, sum);
// }

int SUMofNatural(int n){
    if (n <= 0)
    {
        return 0;
    }
    return n + SUMofNatural(n - 1);
}


int main(){
    int n = 10;
    cout<<"Sum is "<<SUMofNatural(n)<<endl;

    return 0;
}