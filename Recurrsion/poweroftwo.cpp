#include<bits/stdc++.h>
using namespace std;
int power(int num){
    // base case
    if(num==0) return 1;
    // recursive call
    int recans=power(num-1);
    // processing
    int finalans=2*recans;

    return finalans;
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
    return 0;
}