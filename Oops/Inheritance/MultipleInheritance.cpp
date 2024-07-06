#include<bits/stdc++.h>
using namespace std;
class Engineer{
    public:
    string specializaton;
    void work(){
        cout<<"My specialization is :"<<specializaton<<endl;
    }
};
class Youtuber{
    public:
    int subscribers;
    void contentcreator(){
        cout<<"I have a subscriber base of :"<<subscribers<<endl;
    }
};
class Codeteacher:public Engineer,public Youtuber{
    public:
    string name;
    Codeteacher(string name,string specializaton,int subscribers ){
        this->name=name;
        this->specializaton=specializaton;
        this->subscribers=subscribers;   
    }
    void display(){
        cout<<this->name<<endl;
        work();
        contentcreator();
    }
};
int main(){
    Codeteacher s1("ROHIT","cse",49000);
    s1.display();
    return 0;
}