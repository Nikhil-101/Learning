#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int powerof2(int m, int n){
    int ans=1;
    while (n>0)
    {
        if (n&1)
        {
            ans*=m;
        }
        m*=m;
        n>>=1;
    }
    return ans;
}

int main(){
// Count Primes
    // Inefficient
    // int n=499979, count=0, flag=1;
    // for (int i = 2; i <= n; i++)
    // {
    //     for (int j = 2; j < i; j++)
    //     {
    //         if (i%j==0)
    //         {
    //             flag=0;
    //             break;
    //         }
    //     }
    //     if (flag)
    //     {
    //         count++;
    //         cout<<i<<" is prime"<<endl;
    //     }
    //     flag=1;
    // }
    // cout<<"Number of prime numbers upto "<<n<<" are: "<<count<<endl;
    // Efficient Using Sieve method
    // int n=10, count=0;
    // vector<bool> prime(n+1, true);
    // prime[0]=prime[1]=false;
    // for (int i = 2; i < n; i++)
    // {
    //     if (prime[i]==true)
    //     {
    //         count++;
    //         for (int j = 2*i; j < n; j+=i)
    //         {
    //             prime[j]=false;
    //         }
    //     }
        
    // }
    // cout<<"Number of prime numbers upto "<<n<<" are: "<<count<<endl;

    int m=2, n=10;
    cout<<powerof2(m, n)<<endl;


    return 0;
}