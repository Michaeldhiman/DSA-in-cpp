//  in array we can not insert the value after once memory is allocated
// but in vector we can insert the value after memory is allocated
//in vector , don't need to mention the size of array
// just keep inserting the value in vector, i will manage the allocation
#include<bits/stdc++.h>
using namespace std;
void print(vector<char>v){
    cout<<"Array elements are: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// another print method
void newPrint(vector<int>v){
   cout<<"New Print Method:"<<endl;
   for(auto i:v){
    cout<<i<<" ";
   }
    cout<<endl;
}
void print(vector<int>v){
    cout<<"Array elements are: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
   
    // vector<int> v; // vector is a dynamic array
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // print(v);
    // cout<<v.capacity()<<endl; // capacity is 8
    // cout<<v.at(2)<<endl; // 30
    // cout<<v.front()<<endl; // 10
    // cout<<v.back()<<endl; // 50
    
    // // pop--> delete from end
    // v.pop_back(); // 50 is deleted
    // print(v);
    vector<int> v2;
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter "<<i<<" element: ";
        int data;
        cin>>data;
        v2.push_back(data);
    }
    for(int i=1;i<=10;i++){
        v2.push_back(80);   
    }
    // print(v2);
    newPrint(v2);
    //vector is dynamic array, we can insert the value after memory is allocated
   v2.clear(); // delete all the elements of vector
   cout<<v2.size()<<endl; // 0
   cout<<v2.capacity()<<endl; // 16

   vector<char> v3;
    v3.push_back('a');
    v3.push_back('b');
    v3.push_back('c');
    // print(v3);
    return 0;
}