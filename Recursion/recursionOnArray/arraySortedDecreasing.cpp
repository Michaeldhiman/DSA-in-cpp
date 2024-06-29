#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int size,int index,int nextindex){
    // base case
    if(nextindex==size) return true;
    // not sorted
    if(arr[index]<arr[nextindex]) return false;
    check(arr,size,index+1,nextindex+1);
}
int main(){
    int arr[]={60,50,40,30,10};
    int size=5;
    int index=0;
    int nextindex=1;
    cout<<check(arr,size,index,nextindex);
    return 0;
}