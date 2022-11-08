#include<iostream>
#include<unordered_map>
#include<stack>
using namespace std;

class Stack{
    int top;
    int size;
    char* arr;
public:
    Stack(int size){
        this->size=size;
        top=-1;
        arr=new char[size];
    }

    void push(int d){
        if (size-top<=1)
        {
            cout<<"Stack Overflow!!! for: "<<d<<endl;
            return;
        }
        top++;
        arr[top]=d;
        return;
    }

    void pop(){
        if (top<0)
        {
            cout<<"Stack Underflow!!!"<<endl;
            return;
        }
        cout<<"Deleted: "<<arr[top]<<endl;
        top--;
        return;
    }

    char peek(){
        if (top<0)
        {
            cout<<"Stack is empty."<<endl;
            return 0;
        }
        return arr[top];
    }

    bool empty(){
        if (top<0)
        {
            return 1;
        }
        return 0;
    }

    void traverse(){
        
        if (empty())
        {
            return;
        }
        for (int i = 0; i <= top; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
};

int main(){
    unordered_map<char, char> bracket;
        bracket={
            {'{', '}'},
            {'[', ']'},
            {'(', ')'}
        };
    string str="{}{}[]([{}])";
    int size=str.length();
    // Stack s(size);
    stack<char> s;
    // s.push(str[0]);
    for (int i = 0; i < size; i++)
    {
        if (s.empty())
        {
            s.push(str[i]);
        }
        
        else if (str[i]==bracket[s.top()])
        {
            s.pop();
        }
        else{
            s.push(str[i]);
        }
    }
    if (s.empty())
    {
        cout<<"Perfectly Balanced."<<endl;
    }
    else{
        cout<<"Not Balanced."<<endl;
    }
    // s.traverse();

    return 0;
}