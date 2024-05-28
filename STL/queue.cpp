#include<bits/stdc++.h>
using namespace std;
int main(){
    // creation
    queue<int> q;
    // insertion
    q.push(10); // from rightmost side or rear 
    q.push(20);
    q.push(30);
    // 10,20,30
    cout<<"size of queue is:"<<q.size()<<endl;
    q.pop(); // delete element from front side

    cout<<"front element is:"<<q.front()<<endl;
    cout<<"rear element is :"<<q.back()<<endl;
    // if(q.empty()==true){
    //     cout<<"queue is emoty"<<endl;
    // }else{
    //     cout<<"queue is not empty"<<endl;  
    // }
    return 0; 
}