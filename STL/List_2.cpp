#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> mylist;
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    // 10 --> 20 -->30
    list <int> mylist2;
    mylist2.push_back(100);
    mylist2.push_back(200);
    mylist2.push_back(300);
    // 100 --> 200 --> 300 
    cout<<"before swapping"<<endl;
    list<int>::iterator it;
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    mylist.swap(mylist2);
    cout<<"after swapping"<<endl;
    list<int>::iterator it2;
    for(it2=mylist.begin();it2!=mylist.end();it2++){
        cout<<*(it2)<<" ";
    }

    cout<<endl;
    list<int> mylist3;
    mylist3.push_back(10);
    mylist3.push_back(20);
    mylist3.push_back(30);
    // 10 --> 20 --> 30
    mylist3.insert(mylist3.begin(),40);
    // 40 --> 10 --> 20 --> 30
     list<int>::iterator it3;
    for(it3=mylist3.begin();it3!=mylist3.end();it3++){
        cout<<*(it3)<<" ";
    }
    
    cout<<endl<<"size"<<mylist3.size()<<endl;
    mylist3.erase(mylist3.begin(),mylist3.end());
    cout<<mylist3.size()<<endl;
    return 0;
}