#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int size, int target){
    int s=0;
    int e=size-1;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==target) return m;
        // search in left sorted array
        if(arr[s]<=arr[m]){
            // check target is present or not
            // if present search on it 
            // else move to right part
            if(arr[s]<=target && arr[m]>=target){
                e=m-1;
            }else{
                s=m+1;
            }
        }
        // search in right sorted array
        else{
            // check if target is present or not
            // if present search on it
            // else move to left part
            if(arr[m]<=target && arr[e]>=target){
                s=m+1;
            }else{
                e=m-1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={7,8,9,1,2,3,4,5,6};
    int size=9;
    int target=1;
    int index1=search(arr,size,target);
    cout<<"index is "<<index1<<endl;
    return 0;
}