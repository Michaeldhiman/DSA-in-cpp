#include<bits/stdc++.h>
using namespace std;
// Student
class Student{
    public:
    void print(){
        cout<<"I am Student"<<endl;
    }
};
//Male
class Male{
    public:
    void Maleprint(){
        cout<<"I am a Male"<<endl;
    }
};
//Female
class Female{
    public:
    void Femaleprint(){
        cout<<"I am a Female"<<endl;
    }
};
//Boys
class Boy:public Student,public Male{
    public:
    void Boyprint(){
        cout<<"I am a Boy"<<endl;
    }
};
// Girls
class Girl:public Student,public Female{
    public:
    void Girlprint(){
        cout<<"I am a Girl"<<endl;
    }
};
int main(){
    Girl G1;
    G1.Girlprint();
    G1.Femaleprint();
    G1.print();

    return 0;
}