#include<iostream>
#include<map>
using namespace std;

template <class T, class U>
void display(map<T, U> m){
// typename is necessary here because you are in a template definition and iterator is a dependent name
    typename map<T, U>::iterator itr = m.begin();
    for (itr; itr != m.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    
}

int main(){
    map<string, int> m;
    m["Nikhil"] = 99;
    m["B"] = 91;
    m["c"] = 55;
    display(m);

    return 0;
}