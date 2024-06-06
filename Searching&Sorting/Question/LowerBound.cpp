// use the store & compute strategy
// lower bound Binary Search -- store the smallest index of arr[mid]>= x
// upper bound Binary Search -- store the smallest index of arr[mid]>x
// Time Complexity: O(logn)
// Space Complexity: O(1)
// floor Binary Search -- store the largest element of arr[mid]<= x
// ceil Binary Search -- store the smallest element of arr[mid]>= x

#include<bits/stdc++.h>
using namespace std;
int lowerBound(int arr[], int size, int target){
        int s=0;~
        int e=size-1;
        int ans=size;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]>=target){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
}
int upperBound(int arr[], int size, int target){
        int s=0;
        int e=size-1;
        int ans=size;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]>target){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
}
int floor(int arr[],int size, int target){
    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]<=target){
            ans=arr[mid];
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return  ans;
}
int ceil(int arr[],int size, int target){
    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]>=target){
            ans=arr[mid];
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return  ans;
}
int main(){
    int arr[]={1,2,3,3,5,7,8,10,10,11};
    int size=10;
    int target=8;
    int index=lowerBound(arr,size,target);
    int index2=upperBound(arr,size,target);
    int ans=floor(arr,size,target);
    int ans2=ceil(arr,size,target);
    cout<<ans<<" "<<ans2<<endl;
    cout<<index<<" "<<index2;
}
