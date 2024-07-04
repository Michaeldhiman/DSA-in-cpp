#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int acc_no;
    int balance;
    public:
    customer(string name,int acc_no,int balance){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
    }
    void display(){
        cout<<"name :"<<this->name<<endl;
        cout<<"account number: "<<this->acc_no<<endl;
        cout<<"balance: "<<this->balance<<endl;
        
    }
    void deposit(int amount){
        if(amount>0){
            this->balance+=amount;

        }
    }
    void withdraw(int amount){
        if(amount<=balance && amount>0){
            this->balance-=amount;
        }
    }
};
int main(){
    // there should not be direct access to the users( data hiding)
    customer A1("Rohit",1,1000);
    
    return 0;
}