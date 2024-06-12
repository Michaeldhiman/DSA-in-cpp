#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    // vector  --> heap
    make_heap(arr.begin(),arr.end());
    // new element insertion
    arr.push_back(60);
    push_heap(arr.begin(),arr.end());
    // delete 
    pop_heap(arr.begin(),arr.end()); // this will divide into valid and unvalid heap
    arr.pop_back(); // this will remove the invalid heap
    
    // sort
    sort_heap(arr.begin(),arr.end());
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}