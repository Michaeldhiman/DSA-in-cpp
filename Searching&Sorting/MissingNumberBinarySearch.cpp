#include<bits/stdc++.h>
using namespace std;
int  binarySearch(int arr[], int size){
    sort(arr,arr+size);
    int s=0;
    int e=size-1;
    int ansIndex=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]-mid==0) s=mid+1;
        else if(arr[mid]-mid!=0){
            ansIndex=mid;
            e=mid-1;
        }
    }
    if(ansIndex==-1){
        return size; 
    }
    return ansIndex;
   

}
int main(){
    int arr[]={0,1};
    int size=2; 
    int ans=binarySearch(arr,size);
    cout<<ans<<endl;
    return 0; 
}