#include<bits/stdc++.h>
using namespace std;
int a=2; // global variable
void fun(){
    int a=100;
    cout<<a<<endl;
    cout<<::a<<endl;
}
int main(){
    a=20; // global a
    int a=5;    // local to main() function
    cout<<a<<endl;
    cout<<::a<<endl;// accessing global with ::
    {
        // int a=50;
        cout<<a<<endl;
    }
    fun();
    return 0;
}