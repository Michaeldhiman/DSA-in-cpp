#include<bits/stdc++.h>
using namespace std;
int main(){
    // creation
    list<int> mylist;

    // insertion
    mylist.push_back(10);  // insert from rigth most side
    // 10
    mylist.push_back(20);
    // 10 --> 20
    mylist.push_back(30);
    // 10 --> 20 --> 30
    mylist.pop_back();  // delete from rightmost side
    // 10 --> 20 --> 
    mylist.push_front(60); // insert from leftmost side
    // 60 --> 10 -->20 
    mylist.push_front(70);
    // 70 --> 60 --> 10 --> 20 
    mylist.pop_front(); // delete from leftmost sidde
    // 60 --> 10 --> 20  
    cout<<"size of list is:"<<mylist.size()<<endl;
    cout<<"front element is:"<<mylist.front()<<endl;
    cout<<"last element is:"<<mylist.back()<<endl;
    
    list<int>::iterator it;
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;


    // mylist.clear(); // delete all elements
    // if(mylist.empty()==true){
    //     cout<<"list is empty"<<endl;
    // }else{
    //     cout<<"list is not empty"<<endl;
    // }
    return 0;
}