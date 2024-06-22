// check whether array is sorted or not using recursion

#include<bits/stdc++.h>
using namespace std;
bool check(int arr[], int size,int index,int nextindex){
    // base case
    if(nextindex==size) return true;
    // i will check 1 case only
    if(arr[index]>arr[nextindex]) return false;
    // rest recursion will check
    check(arr,size,index+1,nextindex+1);
}
int main(){
    int arr[]={10,20,40,50,60};
    int size=5;
    int index=0;
    cout<<check(arr,size,index,index+1);
    return 0;
}