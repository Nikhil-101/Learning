#include<iostream>
using namespace std;

class Node{
public:
    Node* nxt;
    int data;

    Node(int data){
        this->nxt=NULL;
        this->data=data;
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

void traverseLL(Node* head){
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->nxt;
    }
    cout<<endl;
}

// void kReverseLL(Node* &head, int k){
//     Node* curr=head;
//     Node* frwd=NULL;
//     Node* prev=NULL;
//     Node* start=NULL;
//     Node* pstart=NULL;
//     while (curr!=NULL)
//     {
//         pstart=prev;
//         start=curr;
//         for (int i = 0; i < k && curr!=NULL; i++)
//         {
//             // cout<<i<<" ";
//             frwd=curr->nxt;
//             if (frwd==NULL && i==0)
//             {
//                 cout<<"Last remaining"<<endl;
//                 prev->nxt=NULL;
//                 curr->nxt=head;
//                 head=curr;
//             }
            
//             curr->nxt=prev;

//             prev=curr;
//             curr=frwd;
//         }
//         if (pstart!=NULL)
//         {
//             pstart->nxt=prev;
//         }
//         else{
//             head=prev;
//         }
//         start->nxt=curr;
//     }
// }

Node* kReverseLL(Node* head, int k){

    if (head==NULL)
    {
        return NULL;
    }
    Node* curr=head;
    Node* prev=NULL;
    Node*frwd=NULL;
    for (int i = 0; i < k && curr!=NULL; i++)
    {
        frwd=curr->nxt;
        curr->nxt=prev;
        prev=curr;
        curr=frwd;
    }
    if (frwd!=NULL)
    {
        head->nxt=kReverseLL(frwd, k);
    }
    return prev;
}

bool isCircular(Node* head){
    // Write your code here.
    // int tmp=head->data;
    // if(head==NULL){
    //     return true;
    // }
    // head=head->nxt;
    // while(head!=NULL){
    //     if(head->data==tmp){
    //         return true;
    //     }
    //     head=head->nxt;
    // }
    // return false;
     int arr[1000000]={0};
    if(head==NULL){
        return true;
    }
//     head=head->next;
    while(head!=NULL){
        if(arr[head->data]==1){
            return true;
        }
    arr[head->data]=1;
    head=head->nxt;
    }
    return false;
}

int main(){
    Node* head=new Node(1);
    Node* tail=head;
    int k=2;
    for (int i = 2; i <= 6; i++)
    {
        insertAtTail(tail, i);
    }
    traverseLL(head);
    // head=kReverseLL(head, k);
    // traverseLL(head);
    // cout<<tail->data<<endl;
    // tail->nxt=head;
    cout<<isCircular(head);


    return 0;
}