
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
int getlength(Node* &head){
    Node * temp=head;
    int len=0;
    while(temp!=nullptr){
        len++;
        temp=temp->next;
    }
    return len;
}
void deletion(int position, Node* & head, Node * &tail){
    int length=getlength(head);
    if(head==nullptr){
        Node* temp=head;
        head=nullptr;
        tail=nullptr;
    }else{
        if(position==1){
            Node * temp=head;
            head=temp->next;
            temp->next->prev=nullptr;
            temp->next=nullptr;
            delete temp;
        }
        else if(length==position){
            Node * temp=head;
            for(int i=0;i<position-2;i++){
                temp=temp->next;
            }
            temp->next->prev=nullptr;
            tail=temp;
            temp->next=nullptr;
            delete temp->next;
        }
        else{
            Node* temp=head;
            for(int i=0;i<position-2;i++){
                temp=temp->next;
            }
            Node* current=temp->next;
            Node* forward=current->next;
            temp->next=forward;
            forward->prev=temp;
            current->next=nullptr;
            current->prev=nullptr;
            delete current;
        }
    }
}
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    // 40-> 30-> 20->10->
    deletion(4,head,tail);
    deletion(3,head,tail);
    print(head);

    return 0;
}