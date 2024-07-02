#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int acc_no;
    int balance;
    int *roi;
    public:
    // customer(){
    //     cout<<"constructor is called";
    // }
    customer(){
        name="rohit";          // by default values given to objects
        acc_no=5;
        balance=1000;
        roi=new int[100];
    }
    // customer(string name,int acc_no, int balance){
    //     this->name=name;
    //     this->acc_no=acc_no;
    //     this->balance=balance;          // parameterized constructor
    // }
    customer(string a, int b){
        name=a;
        acc_no=b;
        balance=50;
    }
    // constructor can not be redeclared
    //  inline Constructor

    inline customer(string a,int b,int c): name(a),acc_no(b),balance(c){

    }
    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }
};
int main(){
    customer A1;
    customer A2("rohit",23,100);
    customer A3("Mohit",259);
    A1.display();
    A2.display();
    A3.display();
    return 0;
}