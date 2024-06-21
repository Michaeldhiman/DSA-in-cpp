#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    // base case
    if(n==0) return 0;
    // recursive call
    int ans=n+sum(n-1);
    // processing
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int ans=sum(n);
    cout<<"The sum:"<<ans<<endl;
    return 0;
}