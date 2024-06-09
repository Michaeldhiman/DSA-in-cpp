#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    auto it=binary_search(arr.begin(),arr.end(),30);
    cout<<it<<endl;
    auto it2=lower_bound(arr.begin(),arr.end(),35);
    cout<<(*it2)<<endl;
    return 0;
}