#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int age,roll_no;
    string grade;
    // function getter and setter
    public:
    void setname(string n){
        if(n.size()==0){
            cout<<"Invalid Name:";
            return ;
        }
        name=n;
    }
    void setage(int a){
        if(age<0 || age>100){
            cout<<"Invalid age:";
            return ;
        }
        age=a;
    }
    void setgrade(string g){
        grade=g;
    }
    void setroll(int roll){
        roll_no=roll;
    }
    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getroll(){
        cout<<roll_no<<endl;
    }
    void getgrade(){
        cout<<grade<<endl;
    }
    int getroll_number(){
        return roll_no;
    }
    string get_grade(int pin){
        if(pin==1234){
            return grade;
        }
        return " ";
    }
};
int main(){
    // string name;
    // int age,roll_no;    // suppose there are 10 students 
    // string grade;       // either i have to initialized 10 var for each 
    // cin>>name>>age>>roll_no>>grade;

    // student s1;
    // s1.name="rohit";
    // s1.age=18;      // object s1 of class student is created
    // s1.roll_no=21;
    // s1.grade="A+";
    // cout<<s1.age<<endl;
    // cout<<s1.name<<endl;

    // student s2;
    //  s2.name="michael";
    // s2.age=18;              // object s2 of class student is created
    // s2.roll_no=21;
    // s2.grade="A+";
    // cout<<s2.age<<endl;
    // cout<<s2.name<<endl;

    student s3;
    s3.setname("mohan");
    s3.setgrade("A");
    s3.setroll(21);
    s3.setage(101);       // we can use setter to set value
    s3.getname();
    s3.getage();
    cout<<s3.getroll_number();
    cout<<s3.get_grade(1234);
    return 0;
}