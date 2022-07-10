#include<iostream>
using namespace std;

int size(int s[]){
    cout<<sizeof(s)<<endl;
    return 0;
}

int main(){
    int a[] = {1, 2, 3, 4};
    cout<<sizeof(a)/sizeof(int)<<endl;
    size(a);
    return 0;
}