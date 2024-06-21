#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size,int s ,int e ,int target){
    // base case
    // 2 base case 
    // not found
    if(s>e) return -1;
    // found
    // my part is to check one element only
    int mid=(s+e)/2;
    if(arr[mid]==target) return mid;

    // rest element will check by recurrsion
    // either the element in right side
    if(arr[mid]<target){
        s=mid+1;
       binarySearch(arr,size,s,e,target);
    }
    // either the element in left side
    else{
        e=mid-1;
        binarySearch(arr,size,s,e,target);
    }
    
  
    // recursive relation 
   
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int index=0;
    int target=50;
    int s=0;
    int e=size-1;
    int ans=binarySearch(arr,size,s,e,target);
    if(ans) cout<<"Element found";
    else cout<<"Not found";
    return 0;
}