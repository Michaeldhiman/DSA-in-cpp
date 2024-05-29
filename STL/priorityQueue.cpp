#include<bits/stdc++.h>
using namespace std;
int main(){
    // creation
    priority_queue<int> pq;
    // max-heap--> maximum value--> high priority
    pq.push(10);
    // 10
    pq.push(25);
    // 25,10
    pq.push(55);
    // 55,25,10
    pq.push(21);
    // 55,25,21,10
    cout<<pq.size()<<endl;
    // top element show highest priority element
    cout<<pq.top()<<endl;
    pq.pop(); // highest priority element delete
    cout<<pq.top()<<endl;
    // min-heap--> minimum value--> high priority
    priority_queue<int,vector<int>,greater<int>> queue;
    queue.push(100);
    //100
    queue.push(50);
    //50,100
    queue.push(10);
    //10,50,100
    cout<<queue.size()<<endl;
    cout<<queue .top()<<endl; // minimum value has highest priority
    queue.pop(); // delete minimum value
    cout<<queue.top()<<endl;


    return 0;
}