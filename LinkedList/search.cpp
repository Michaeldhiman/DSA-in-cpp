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
Node *insertAtHead(int value,Node* &head,Node* &tail){
    if(head==NULL && tail ==NULL){
    Node* newNode=new Node(value);
    head=newNode;
    tail=newNode;
    }else{
        Node* newNode=new Node(value);
        newNode->next=head;
        head=newNode;
    }
    return head;
}
// HW: return exact position if found
bool search(int value,Node*&head,Node*&tail){
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==value) return true;
        temp=temp->next;
    }
    return false;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    head =insertAtHead(10,head,tail);
    head=insertAtHead(20,head,tail);
    head=insertAtHead(30,head,tail);
    head=insertAtHead(40,head,tail);
    head=insertAtHead(50,head,tail);
    bool ans=search(80,head,tail);
    if(ans) cout<<"Target found";
    else cout<<"Not Found";

}