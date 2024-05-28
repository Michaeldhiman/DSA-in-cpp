#include<bits/stdc++.h>
using namespace std;
int main(){
     // creation 
     vector<int> marks={1,2,3,4,5};

    // creation and intialization
    vector<int> miles(5,10); //5 elements with miles 10 each
    cout<<*(miles.begin())<<endl; 
    miles.push_back(20);
    miles.push_back(40); 
    miles.pop_back();
  
    cout<<miles.size()<<endl; 
    cout<<miles.capacity()<<endl; // 10 
    miles.insert(miles.begin(),50 ); 
    cout<<miles.front()<<endl; // leftmost element
    cout<<miles.back()<<endl ;// rightmost element


    if(miles.empty()==true){
        cout<<"vector is empty"<<endl;
    }else{
        cout<<"vector is not empty "<<endl; 
    }
    miles.swap(marks);
    cout<<miles.size()<<endl;


    // jagged 2-D vector
    vector<vector<int>> arr(4);
    arr[0]=vector<int> (2);
    arr[1]=vector<int> (3);
    arr[2]=vector<int> (4);
    arr[3]=vector<int> (5);
    for(auto i:arr){
        cout<<i.size()<<" ";
    }

    return 0;
}