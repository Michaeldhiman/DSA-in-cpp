#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int acc_no;
    int acc_balance;
    bool isactive;
    public:
    void setname(string name){
        this->name=name;
    }
    void setacc_no(int acc){
        this->acc_no=acc;
    }
    void setacc_balance(int balance){
        this->acc_balance=balance;
    }
    void setactive(bool active){
        this->isactive=active;
    }
    void deposit(int amount,int acc_no){
        if(acc_no==this->acc_no )
        this->acc_balance+=amount;
        else{
            cout<<"Account Not matched"<<endl;
        }
    }
    bool withdrew(int amount, int acc_no){
        if(acc_no==this->acc_no){
            if(acc_balance>amount){
                this->acc_balance-=amount;
                return true;
            }else{
                cout<<"Insufficient Amount"<<endl;
                return false;
            }
        }else{
              cout<<"Account Not matched"<<endl;
        }
    }
    void transfer(int amount,int myacc_no, customer& targetAccount){
        int target_acc=targetAccount.acc_no;
        if(withdrew(amount,myacc_no)){
            targetAccount.deposit(amount,target_acc);
        }else{
             cout<<"Insufficient Amount"<<endl;
        }
    }
    void print(){
        cout<<this->name<<endl;
        cout<<this->acc_balance<<endl;
        cout<<this->acc_no<<endl;
    }
};
int main(){
    customer c1,c2;
    c1.setname("rohit");
    c1.setacc_no(234);
    c1.setacc_balance(0);
    c1.setactive(1);
    c2.setname("Mohit");
    c2.setacc_no(123);
    c2.setacc_balance(100);
    c2.setactive(1);
    c1.deposit(1000,234);
    // c1.print();
    c1.withdrew(500,234);
    c1.deposit(1000,234);
    c1.transfer(500,234,c2);
    c1.print();
    c2.print();
    
    

 
    

    
    return 0;
}