#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    // base case
    if(n==0 || n==1) return n;
    // recursive call
    int ans=fib(n-1)+fib(n-2);
    // processing
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int ans=fib(n);
    cout<<"The "<<n<<"th fibonacci  number :"<<ans<<endl;
    return 0;
}