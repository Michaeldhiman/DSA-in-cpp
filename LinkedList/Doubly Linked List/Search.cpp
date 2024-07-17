
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
bool search(Node* &head,int val){
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    // 40-> 30-> 20->10->
    cout<<search(head,40);
    return 0;
}