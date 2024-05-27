#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,3,5,3,4};
     v.insert(v.begin(),737);
     // 737--> 0 no work
    
    // visiting with -1
    for(int i=1;i<v.size();i++){
        if(v[abs(v[i])]>0){
            v[abs(v[i])]*=(-1);
        }
    }
    for(int i=1 ;i<v.size();i++){
        if(v[i]>0){
            cout<<i<<endl;
        }
    }
    return 0;
}