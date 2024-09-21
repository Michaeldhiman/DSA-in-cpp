#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,-3,4,-5,6,-7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=1;
    while(j<n){
        if(arr[j]>=0) j++;
        else{
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}