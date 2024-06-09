#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> arr(5);
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    // arr.push_back(40);
    // arr.push_back(50);
    // int total_sum=accumulate(arr.begin(),arr.end(),0);
    // cout<<"Total Sum is:"<<total_sum<<endl;


    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    vector<int> second;
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);
    // int innerProduct=inner_product(first.begin(),first.end(),second.begin(),1000);
    // cout<<"Inner Product is "<<innerProduct<<endl;
    vector<int> result(first.size());
    partial_sum(first.begin(),first.end(),result.begin());
    cout<<"Partial Sum is: ";
    for(auto i:result){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}