//  in array we can not insert the value after once memory is allocated
// but in vector we can insert the value after memory is allocated
//in vector , don't need to mention the size of array
// just keep inserting the value in vector, i will manage the allocation
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>v){
    cout<<"Array elements are: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v; // vector is a dynamic array
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    print(v);
    cout<<v.capacity()<<endl; // capacity is 8
    cout<<v.at(2)<<endl; // 30
    cout<<v.front()<<endl; // 10
    cout<<v.back()<<endl; // 50
    
    // pop--> delete from end
    v.pop_back(); // 50 is deleted
    print(v);
   
    return 0;
}