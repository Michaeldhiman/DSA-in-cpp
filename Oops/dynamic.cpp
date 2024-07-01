#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int age,roll_no;
    string grade;
};
int main(){
    student *s=new student;     // memory allocation from heap memory
    (*s).name="michael";
    cout<<(*s).name<<endl;
    s->age=20;
    cout<<s->age<<endl;
    return 0;
}