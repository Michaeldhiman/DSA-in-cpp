#include<bits/stdc++.h>
using namespace std;
void minimum(int arr[], int size,int index,int &ans){
    // base case

    if(size==index) return ;
    // found
    // my part is to check one element only
    ans=min(ans,arr[index]);
    // rest element will check by recurrsion
    minimum(arr,size,index+1,ans);
   
}
int main(){
    int arr[]={60,50,30,20,10,5};
    int size=6;
    int index=0;
    int ans=INT_MAX;
    minimum(arr,size,index,ans);
  cout<<ans<<endl;
    return 0;
}