#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);
    vector<int> second;
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);
    second.push_back(6);
    vector<int> result;
    // set union

    // set_union(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    
    // set intersection

    // set_intersection(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));

    // set_difference

    // set_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));

    //  set_symmetric_difference

    set_symmetric_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));

    for(auto i:result){
        cout<<i<<" ";
    }

    return 0;
}