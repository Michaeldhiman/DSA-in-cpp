#include<bits/stdc++.h>
using namespace std;
int main(){
    // char ch='a';
    // char* ptr=&ch;
    // cout<<sizeof(ptr)<<endl;
    // int a=5;
    // int* ptr=&a;
    // cout<<sizeof(ptr)<<endl;
    int a=5;
    int *p=&a;
    int *q=p;
    cout<<"a:"<<a<<endl;
    cout<<"p:"<<p<<endl;
    cout<<"*p:"<<*p<<endl;
    cout<<"&p:"<<&p<<endl;
    cout<<"q:"<<q<<endl;
    cout<<"&q:"<<&q<<endl;
    
    return 0;
}