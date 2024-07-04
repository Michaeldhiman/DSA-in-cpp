// they are attributes of classes or class member
// static member function --> to access static member being in private
#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int acc_no;
    int balance;
    static int total_balance;
    static int  total_customer;
    public:
    customer(string name,int acc_no,int balance){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
        total_customer++;
        total_balance+=balance;
    }
    void display(){
        cout<<"name :"<<this->name<<endl;
        cout<<"account number: "<<this->acc_no<<endl;
        cout<<"balance: "<<this->balance<<endl;
        cout<<"Total customer: "<<this->total_customer<<endl;
    }
    void display_total(){
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;
    }
    static void access(){
        cout<<total_customer<<endl;
    }
    void deposit(int amount){
        if(amount>0){
            this->balance+=amount;
            total_balance+=amount;
        }
    }
    void withdraw(int amount){
        if(amount<=balance && amount>0){
            this->balance-=amount;
            total_balance-=amount;
        }
    }
};
int customer::total_customer=0;
int customer::total_balance=0;
int main(){
    
    customer A1("Rohit",1,1000);
    customer A2("Mohit",2,2000);
    customer A3("Mohan",4,6000);
    customer::access();
    A1.deposit(3000);
    A1.display();
    A1.display_total();
    // A2.display();
    // A3.display();
    // A3.display_total();
    // customer::total_customer=5;
    return 0;
}