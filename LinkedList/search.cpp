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
void insertAtHead(int value,Node* &head,Node* &tail){
    if(head==NULL && tail ==NULL){
    Node* newNode=new Node(value);
    head=newNode;
    tail=newNode;
    }else{
        Node* newNode=new Node(value);
        newNode->next=head;
        head=newNode;
    }
    return ;
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
bool search2(int value,Node* head,int & index){
    Node *temp=head;
    int pos=1;
    while(temp!=NULL){
        if(temp->data==value){
            index=pos;
            return true;
        }
        pos++;
        temp=temp->next;
    }
    return false;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int index=-1;
    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    insertAtHead(50,head,tail);
    bool ans=search2(50,head,index);
    cout<<"index:"<<index<<endl;
    if(ans) cout<<"Target found";
    else cout<<"Not Found";

}