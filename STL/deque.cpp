#include<bits/stdc++.h>
using namespace std;
int main(){
    //creation
    deque<int> dq;

    // insertion 
    dq.push_back(10); //insert 10 from back
    dq.push_back(20); //insert 20 from back
    dq.push_front(30); // insert 30 from front
    dq.push_front(40); // insert 40 from front
    // 40 --> 30 --> 10-->20
    dq.pop_back(); // delete from back
    // 40 --> 30 --> 10
    dq.pop_front(); // delete from front
    // 30 --> 10
    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    // if(dq.empty){
    //     cout<<"Empty"<<endl;
    // }else{
    //     cout<<"Not Empty"<<endl;
    // }
    cout<<endl;
    cout<<dq.at(1)<<endl;
    dq.insert(dq.begin()+1,100);

    deque<int>:: iterator it;
    for(it =dq.begin();it!=dq.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}