#include<bits/stdc++.h>
using namespace std;
int main(){
    // creation
    stack<int> s;
    s.push(10); // insert from top
    s.push(20);
    s.push(30);
    // 10,20,30
    cout<<s.size()<<endl;
    s.pop(); // delete from top (30)
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    
    return 0;
}