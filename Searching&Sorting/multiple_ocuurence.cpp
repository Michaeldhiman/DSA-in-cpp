#include<bits/stdc++.h>
using namespace std;
void findFirstOccurrence(int arr[], int size,  int target, int &ansindex ){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            // this may be answer or may not be the answer
            ansindex=mid;
            // first occurrence may be present before it so we move to left part of array
            end=mid-1;
        }
        if(arr[mid]>target){
            end=mid-1;
        }else if(arr[mid]<target){
            start=mid+1;
        }
    }
}
void findLastOccurrence(int arr[], int size,  int target, int &ansindex2 ){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            // this may be answer or may not be the answer
            ansindex2=mid;
            // last occurrence may be present before it so we move to right part of array
            start=mid+1;
        }
        if(arr[mid]>target){
            end=mid-1;
        }else if(arr[mid]<target){
            start=mid+1;
        }
    }
}
int main(){
    int arr[]={10,20,20,20,20,20,20,30,40,50,60};
    int n=11;
    int target=20;
    int ansindex=-1;
    int ansindex2=-1;
    // we are using binary search 
    findFirstOccurrence(arr,n,target,ansindex);
    findLastOccurrence(arr,n,target,ansindex2);
    cout<<"First Occurrence of "<<target<<" is:"<<ansindex<<endl;
    cout<<"Last Occurrence of "<<target<<" is:"<<ansindex2<<endl;
     
    return 0;
}