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
void insertAtTail(int value,Node* &head,Node* &tail){
    // ll is empty
    if(head==nullptr && tail==nullptr){
        Node* newNode=new Node(value);
        head=newNode;
        tail=newNode;
    }else{
        // ll is not empty
        Node* newNode=new Node(value);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
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
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    insertAtTail(10,head,tail); 
    insertAtTail(20,head,tail); 
    insertAtTail(30,head,tail); 
    insertAtTail(40,head,tail); 
    // 10->20->30->40
    print(head);
    cout<<endl<<"Reverse order"<<endl;
    return 0;
}