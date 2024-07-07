#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"Huhu\n";
    }
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"Bark\n";
    }
    // void roti{
    //     cout<<"hellp";
    // }
};
class Cat:public Animal{
    public:
    void speak(){
        cout<<"Meow\n";
    }
};
int main(){
    // Animal *p;
    // p=new Dog();
    // p->speak();
    // p->roti();
    Animal *p;
    vector<Animal*> arr;
    arr.push_back(new Dog());
    arr.push_back(new Cat());
    arr.push_back(new Animal());
    arr.push_back(new Dog());
    arr.push_back(new Cat());
    for(int i=0;i<arr.size();i++){
        p=arr[i];
        p->speak();
    }
    return 0;
}