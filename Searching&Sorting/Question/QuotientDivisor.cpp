// You are given two integer one is dividend and divisor
// we need to find the quotient when dividend is divided
// by divisor without using division


// here we are using binary search (Search space pattern)
#include<bits/stdc++.h>
using namespace std;
int getQuotient(int dividend,int divisor){
    // search space (-ve)dividend to (+ve)dividend
    int s=-dividend;
    int e=dividend;
    int ans=-1;
    while(s<=e){
        long long int mid=((s+e)>>1);
        long long int val=mid*divisor;
        if(val==dividend){
            return mid;
        }
        if(val<dividend){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int dividend=-10;
    int divisor=-2;
    int ans=getQuotient(abs(dividend),abs(divisor));
    if((dividend<0 && divisor>0)||(dividend>0 && divisor<0)) ans=-ans;
    cout<<ans<<endl;
    return 0;
}