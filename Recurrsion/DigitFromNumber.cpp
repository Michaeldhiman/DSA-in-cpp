#include<bits/stdc++.h>
using namespace std;
void digit(int n,vector<int> &ans){
    if(n==0) return ;
    // my part is to get one digit from number
    int get=n%10;
    digit(n/10,ans);
    ans.push_back(get);
}
int main(){
    vector<int> v;
    int n=389;
    digit(n,v);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}