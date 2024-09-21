#include<bits/stdc++.h>
#include<exception>
using namespace std;
class invalidAmount_Error:public runtime_error{
    public:
    invalidAmount_Error(const string &msg):runtime_error(msg){};
};
class Customer{
    int balance;
    int acc_no;
    string name;
    public:
    Customer(string name,int balance,int acc_no){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
    }

    // one way for exception handling

    // void deposit(int amount){
    //     if(amount>0){
    //         balance+=amount;
    //         cout<<amount<<"rs credited successfully"<<endl;
    //     }else{
    //         cout<<"amount should be greater than 0"<<endl;
    //     }
    // }
    // void withdrew(int amount){
    //     if(amount>0 && amount<=balance){
    //         balance-=amount;
    //         cout<<amount<<"rs debited successfully"<<endl;
    //     }else if(amount==0){
    //         cout<<"amount should be greater than 0"<<endl;
    //     }else{
    //         cout<<"Your Balance is low"<<endl;
    //     }
    // }

    // second way
void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<amount<<"rs credited successfully"<<endl;
        }else{
            throw invalidAmount_Error("amount should be greater than 0");
        }
    }
    void withdrew(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<<"rs debited successfully"<<endl;
        }else if(amount==0){
            throw runtime_error("amount should be greater than 0");
        }else{
            throw runtime_error("Your Balance is low");
        }
    }
    void display(){
        cout<<"name->"<<name<<endl;
        cout<<"acc_no->"<<acc_no<<endl;
        cout<<"balance->"<<balance<<endl;
    }
};
int main(){
    Customer A1("rohit",1000,123);

    // A1.deposit(2000);
    // A1.withdrew(4000);

    try{
    A1.deposit(-20);
    A1.withdrew(4000);
    A1.deposit(2000);
    }
    catch(const invalidAmount_Error &e){
        cout<<"Exception occured:"<<e.what()<<endl;
    }
    catch(const runtime_error &e){
        cout<<"Exception occured:"<<e.what()<<endl;
    }
    catch(const bad_alloc& e){
       
        cout<<"Exception occured:"<<e.what()<<endl;
    }   
    catch(...){
        cout<<"Exception occurred"<<endl;
    }
    // catch(const char *e){
    //     cout<<"Exception occured:"<<e<<endl;
    // }
//    A1.display();
}