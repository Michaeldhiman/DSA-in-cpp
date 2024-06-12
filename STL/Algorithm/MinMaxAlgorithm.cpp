#include<bits/stdc++.h>
using namespace std;
int main(){
    // min/max element in array
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    auto it=max_element(arr.begin(),arr.end());
    auto it2=min_element(arr.begin(),arr.end());
    cout<<*(it)<<" "<<*(it2)<<endl;



    // compare 2 numbers

    // int a=10;
    // int b=5;
    // cout<<max(a,b)<<endl;
    // cout<<min(a,b)<<endl;
    return  0;
}