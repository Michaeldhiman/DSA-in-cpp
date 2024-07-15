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
int getlength(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(int value,Node* &head,Node* &tail){
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
    return ;
}
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
void insertAtPosition(int position,int value,Node* &head,Node*&tail){
    int length=getlength(head);
    if(position==1){
        insertAtHead(10,head,tail);
    }else if(position==length+1){

    }else{
    Node* temp=head;
    int i=1;
    while(i<position-1){
        temp=temp->next;
        i++;
    }
    Node* newNode=new Node(value);
    newNode->next=temp->next;
    temp->next=newNode;
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    //LL is empty
    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtPosition(2,50,head,tail);
    insertAtPosition(4,60,head,tail);
    print(head);

}