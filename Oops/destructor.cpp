#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int *data;
    public:
    customer(){
        name="4";
        cout<<"constructor is called for "<<name<<endl;

    }
    // customer(){
    //     name="Rohit";
    //     data=new int ;
    //     *data=10;
    //     cout<<"Construcut is called"<<endl;
    // }
    customer(string name){
        this->name=name;
        cout<<"constructor is called for "<<name<<endl;
    }
    // destuctor is called once
    ~customer(){
        // delete data;
        cout<<"Destructor is called for "<<name <<endl;
    }
};
int main(){
    customer a1("1"),a2("2"),a3("3");
    customer *a4=new customer;
    delete a4;
    return 0;
} 
