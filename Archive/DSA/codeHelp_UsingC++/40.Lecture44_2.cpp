#include<iostream>
using namespace std;
// Circular Linked List
// ///ly to others linked list so no need to do more on it
class Node{
public:
    int data;
    Node* nxt;

    Node(int data){
        this->data=data;
        this->nxt=NULL;
    }

    ~Node(){
        int val=this->data;
        this->nxt=NULL;
        delete nxt;
        cout<<"Deleted Node: "<<val<<endl;
    }
};

void insertAtHead(Node* &head, Node* &tail, int d){
    Node* node=new Node(d);
    node->nxt=head;
    head=node;
    tail->nxt=head;
}

void insertAtTail(Node* &head, Node* &tail, int d){
    Node* node=new Node(d);
    tail->nxt=node;
    tail=node;
    node->nxt=head;
}

void traverseCLL(Node* head, Node* tail){
    do
    {
        cout<<head->data<<" ";
        head=head->nxt;
    }while (head!=tail->nxt);
    cout<<endl;
}

int main(){
    Node* head=new Node(10);
    head->nxt=head;
    Node* tail=head;

    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 1);
    insertAtTail(head, tail, 15);
    insertAtTail(head, tail, 20);

    traverseCLL(head, tail);

    return 0;
}