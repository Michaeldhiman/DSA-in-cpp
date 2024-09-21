// exponetial search    

#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int s,int e,int x){
    while(s<=e){
        int m=(s+e)/2;
        if(a[m]==x) return m;
        else if(a[m]>x){
            e=m-1;
        }else{
            s=m+1;
        }
    }
    return -1;
}
int expSearch(int a[],int n,int x){
    if(a[0]==x) return 0;
    int i=1;
    while(i<n && a[i]<=x){
        i=i*2;
    }
    return bs(a,i/2,min(i,n-1),x);
}
int main(){
    int a[]={3,4,5,6,11,13,14,15,56,70};
    int n=10;
    int x=13;
    int ans=expSearch(a,n,x);
    cout<<ans<<endl;
}
