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
}
void deleteNode(int position,Node*& head,Node *&tail){
    if(head==NULL && tail==tail){
        cout<<"No node to delete"<<endl;
        return ;
    }
    // single node
    else if(head==tail){
        Node *temp=head;
        head=NULL;
        tail==NULL;
        delete temp;
    }else{
        // 2 case position 1 and other position
        if(position==1){
            Node* temp=head;
            head=temp->next;
            temp->next=NULL;
            delete temp;
        }else{
            Node *temp=head;
            for(int i=1;i<position-1;i++){
                temp=temp->next;
            }
            Node *node_Delete=temp->next;
            temp->next=node_Delete->next;
            node_Delete->next=NULL;
            delete node_Delete;
        }
    }
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
    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    deleteNode(4,head,tail);
    print(head);
}