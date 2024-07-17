#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    // constructor
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};
// return the head of new LL after insertion
Node *insertAtHead(int value,Node* &head,Node* &tail){
    // LL is empty ---> jab mera head and tail null ko point karenge
    // we are creating the first node of LL
    if(head==NULL && tail ==NULL){
    // step 1: create a new node
    Node* newNode=new Node(value);
    //step 2:head ko  new node pr lagado
    head=newNode;
    // step 3: tail ko new node pr lagado
    tail=newNode;
    }else{
        // LL is not empty
        // phele se node present
        // insert at head
        // create node
        Node* newNode=new Node(value);
        // connect this newNode to head node
        newNode->next=head;
        //  head update krdo
        head=newNode;
    }
    return head;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void length()
int main(){
    // Node first;
    // Node * first=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    //LL is empty
    head =insertAtHead(10,head,tail);
    print(head);
    // 10-> null
    head=insertAtHead(20,head,tail);
    print(head);
    // 20-> 10->null
    head=insertAtHead(30,head,tail);
    // 30 -> 20-> 10-> null
    print(head);
}