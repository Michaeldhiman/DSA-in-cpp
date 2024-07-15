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
void insertAtTail(int value,Node* & head,Node*& last){
    if(head==NULL && last==NULL){
        Node* newNode=new Node(value);
        head=newNode;
        last=newNode;
    }else{
        Node* newNode=new Node(value);
        last->next=newNode;
        last=newNode;
    }
    return ;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtTail(101,head,tail);
    print(head);
    insertAtTail(201,head,tail);
    print(head);
    return 0;
}