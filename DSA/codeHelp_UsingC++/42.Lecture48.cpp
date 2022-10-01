#include<iostream>
#include<map>
using namespace std;
// Remove Duplicate from LinkedList

class Node{
public:
    Node* nxt;
    int data;

    Node(int data){
        this->data=data;
        this->nxt=NULL;
    }

    ~Node(){
        int val=this->data;
        this->nxt=NULL;
        delete this->nxt;
        cout<<"Deleted Node: "<<val<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node* node=new Node(d);
    node->nxt=head;
    head=node;
}

void insertAtTail(Node* &tail, int d){
    Node* node=new Node(d);
    tail->nxt=node;
    tail=node;
}

void traverseLL(Node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->nxt;
    }
    cout<<endl;
}

void removeDuplicatesSorted(Node* head){
    Node* tmp=NULL;
    while (head->nxt!=NULL)
    {
        if (head->data==head->nxt->data)
        {
            tmp=head->nxt;
            head->nxt=head->nxt->nxt;
            delete tmp;
        }
        else{
            head=head->nxt;
        }
    }
}

void removeDuplicates(Node* head){
    if (head==NULL || head->nxt==NULL)
    {
        return;
    }
    
    Node* tmp=NULL;
    Node* curr=head;
    
    map<int, bool> cmp;
    cmp[curr->data]=true;
    while (curr->nxt!=NULL)
    {
        if (cmp[curr->nxt->data]==true)
        {
            tmp=curr->nxt;
            curr->nxt = tmp->nxt;
            delete tmp;
        }
        else{
            cmp[curr->nxt->data]=true;
            curr=curr->nxt;
        }
    }
    
}

int main(){
    // template for any new node file---------------
    Node* head=new Node(10);
    Node* tail=head;

    insertAtTail(tail, 40);
    insertAtTail(tail, 30);
    insertAtTail(tail, 20);
    insertAtTail(tail, 40);
    insertAtTail(tail, 20);
    insertAtTail(tail, 40);
    insertAtTail(tail, 30);
    insertAtTail(tail, 20);
    insertAtTail(tail, 40);
    insertAtTail(tail, 10);

    traverseLL(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    // ---------------------------------------------
// Remove Duplicates from Sorted LinkedList
    // removeDuplicatesSorted(head);
    // traverseLL(head);

// Remove Duplicates from UnSorted LinkedList
    removeDuplicates(head);
    traverseLL(head);


    return 0;
}