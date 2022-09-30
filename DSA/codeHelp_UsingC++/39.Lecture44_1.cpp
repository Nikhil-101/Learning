#include<iostream>
using namespace std;
// Doubly LinkedList

class Node{
public:
    int data;
    Node* nxt;
    Node* prev;
    Node(int data){
        this->data=data;
        this->nxt=NULL;
        this->prev=NULL;
    }
    ~Node(){
        int value=this->data;
        this->nxt=NULL;
        this->prev=NULL;
        delete nxt;
        delete prev;
        cout<<"Deleted Node: "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node* node=new Node(d);
    node->nxt=head;
    head->prev=node;
    head=node;
}

void insertAtTail(Node* &tail, int d){
    Node* node=new Node(d);
    tail->nxt=node;
    node->prev=tail;
    tail=node;
}

void insertAtIndex(Node* &head, Node* &tail, int index, int d){
    if (index==1)
    {
        insertAtHead(head, d);
        return;
    }
    Node* tmp=head;
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
    node->prev=tmp;
    tmp->nxt->prev=node;
    tmp->nxt=node;
}

void deletionAtIndex(Node* &head, Node* &tail, int index){
    if (index==1)
    {
        Node* tmp=head;
        head=head->nxt;
        head->prev=NULL;
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
        delete curr;
        return;
    }
    curr->nxt->prev=curr->prev;
    delete curr;
}

void traverseLLR(Node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->nxt;
    }
    cout<<endl;
}

void traverseLLL(Node* tail){
    while (tail!=NULL)
    {
        cout<<tail->data<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}

int main(){
    Node* head=new Node(10);
    Node* tail=head;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtTail(tail, 50);
    insertAtIndex(head, tail, 3, 55);
    insertAtIndex(head, tail, 1, 75);
    insertAtIndex(head, tail, 1, 85);
    insertAtIndex(head, tail, 7, 115);

    traverseLLR(head);
    traverseLLL(tail);

    deletionAtIndex(head, tail, 3);
    deletionAtIndex(head, tail, 1);
    deletionAtIndex(head, tail, 5);
    deletionAtIndex(head, tail, 4);

    traverseLLR(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    return 0;
}