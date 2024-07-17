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

void insertAtPosition(int position,int value,Node* &head,Node* &tail){
    // left most,right most and middle 
    Node * temp=head;
    for(int i=0;i<position-2;i++){
        temp=temp->next;
    }
    Node * newNode=new Node(value);
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
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
void insertAtHead(int value,Node* &head,Node* &tail){
    // ll is empty
    Node* newNode=new Node(value);
    if(head==nullptr && tail==nullptr){
        head=newNode;
        tail=newNode;
    }else{
        // ll is not empty
     
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
    
return ;
}
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    // 40-> 30-> 20->10->
    insertAtPosition(3,10,head,tail);
    print(head);
    return 0;
}