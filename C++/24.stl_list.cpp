#include<iostream>
#include<list>
using namespace std;

template <class T>
void display(list<T> &l){
// typename is necessary here because you are in a template definition and iterator is a dependent name
    typename list<T>::iterator itr = l.begin();
    for (itr; itr != l.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(91);
    l1.push_back(11);
    l1.push_back(1);
    l1.push_back(9);
    display(l1);
    l1.sort();
    l1.reverse();
    display(l1);

    return 0;
}