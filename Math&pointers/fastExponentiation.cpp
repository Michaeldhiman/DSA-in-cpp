#include<bits/stdc++.h>
using namespace std;
int fastExponentiation(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){
           ans=ans*a;
        }
        a=a*a;
        b=b/2;
    }
    return ans; 
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=fastExponentiation(a,b);
    cout<<ans<<endl;
    return 0;
}