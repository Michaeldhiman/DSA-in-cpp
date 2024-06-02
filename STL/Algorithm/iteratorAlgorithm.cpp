#include<bits/stdc++.h>
using namespace std;
void printdouble(int val){
    cout<<2*val<<endl;
}
bool checkeven(int val){
    return val%2==0;
}
int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(30);
    arr.push_back(40);
    // for_each(arr.begin(),arr.end(),printdouble);// for each will go to each element and perform operation
    auto it=find(arr.begin(),arr.end(),20);  // rreturn the iterator if element found
    cout<<*it<<endl;

    auto it2=find_if(arr.begin(),arr.end(),checkeven); // find the first element that satisfies the condition
    cout<<*it2<<endl;
    int ans=count(arr.begin(),arr.end(),20); // count the number of times element is present
    cout<<ans<<endl;
    int ans2=count_if(arr.begin(),arr.end(),checkeven); // count the number of times element is present
    cout<<ans2<<endl;

    cout<<"sort"<<endl;
    sort(arr.begin(),arr.end());
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl<<"sort decreasing "<<endl;
    sort(arr.begin(),arr.end(),greater<int>());
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl<<"reverse"<<endl;
    reverse(arr.begin(),arr.end());
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl<<"rotate"<<endl;
    rotate(arr.begin(),arr.begin()+2,arr.end());
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl<<"unique"<<endl;
    vector<int> arr2;
    arr2.push_back(11);
    arr2.push_back(11);
    arr2.push_back(12);
    arr2.push_back(12);
    arr2.push_back(12);
    arr2.push_back(13);
    auto it3=unique(arr2.begin(),arr2.end());
    arr2.erase(it3,arr2.end());
    for(auto i:arr2){
        cout<<i<<" ";
    }
    cout<<endl<<"partition"<<endl;
    auto it4=partition(arr.begin(),arr.end(),checkeven); // partition the array based on the condition
    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}