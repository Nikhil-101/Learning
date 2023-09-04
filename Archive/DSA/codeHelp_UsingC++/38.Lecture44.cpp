#include<iostream>
using namespace std;

class Node{
public:
    Node* nxt;
    int data;

    Node(int data){
        this->data=data;
        this->nxt=NULL;
    }
    ~Node(){
        int value = this->data;
        if (this->nxt!=NULL)
        {
            this->nxt=NULL;
            delete nxt;
        }
        cout<<"Deleted Node: "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node* node=new Node(d);
    node->nxt=head;
    head = node;
}

void insertAtTail(Node* &tail, int d){
    Node* node=new Node(d);
    tail->nxt=node;
    tail=node;
}

void insertAtPosition(Node* head, Node* tail, int index, int d){
    Node* tmp=head;
    if (index==1)
    {
        insertAtHead(head, d);
        return;
    }
    for (int i = 2; i < index; i++)
    {
        tmp=tmp->nxt;
    }
    if (tmp->nxt==NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    Node* node=new Node(d);
    
    node->nxt=tmp->nxt;
    tmp->nxt=node;
}

void deleteAtPosition(Node* &head, Node* &tail, int index){
    if (index==1)
    {
        Node* tmp=head;
        head=head->nxt;
        delete tmp;
        return;
    }
    
    Node* curr=head;
    Node* prev=NULL;
    for (int i = 1; i < index; i++)
    {
        prev=curr;
        curr=curr->nxt;
    }
    prev->nxt=curr->nxt;
    if (curr->nxt==NULL)
    {
        tail=prev;
    }
    
    delete curr;
}

void traverseLL(Node* head){
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->nxt;
    }
    cout<<endl;
}

int main(){
    Node* head=new Node(10);
    Node* tail=head;
    insertAtHead(head, 20);
    traverseLL(head);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtTail(tail, 100);
    insertAtTail(tail, 110);
    insertAtPosition(head, tail, 6, 1000);
    traverseLL(head);
    deleteAtPosition(head, tail, 7);
    traverseLL(head);
    cout<<"Tail: "<<tail->data<<endl;


    return 0;
}