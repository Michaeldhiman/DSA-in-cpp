
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    Node(int value){
        data=value;
        prev=nullptr;
        next=nullptr;
    }
};
void insertAtHead(int value,Node* &head,Node* &tail){
    // ll is empty
    if(head==nullptr && tail==nullptr){
        Node* newNode=new Node(value);
        head=newNode;
        tail=newNode;
    }else{
        // ll is not empty
        Node* newNode=new Node(value);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
return ;
}
void print(Node* head){
    Node * temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<" ";
}
void print2(Node* tail){
    Node* temp=tail;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->prev;
    }
    cout<<endl;
}
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    // 40-> 30-> 20->10->
    print(head);
    cout<<endl<<"Reverse order"<<endl;
    print2(tail);
    return 0;
}