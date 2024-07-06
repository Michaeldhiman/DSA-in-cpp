#include<bits/stdc++.h>
using namespace std;
class Human{
    public:
    string name;
    void display(){
        cout<<"My Name is "<<name<<endl;
    }
};
class Engineer:public virtual Human{
    public:
    string spec;
    void work(){
        cout<<"My specialization is :"<<spec<<endl;
    }
};
class Youtuber:public virtual Human{
    public:
    int subscribers;
    void contentcreator(){
        cout<<"I have a subscriber base of :"<<subscribers<<endl;
    }
};
class Codeteacher:public Engineer,public Youtuber{
    public:
    string salary;
    Codeteacher(){

    }
    Codeteacher(string name,string spec,int subscribers,int salary ){
        this->name=name;
        this->spec=spec;
        this->subscribers=subscribers;  
        this->salary=salary; 
    }
};
int main(){
   Codeteacher A1("Rohit","cse",49000,10000);
// Codeteacher a1;
A1.display();
    return 0;
}