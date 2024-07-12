#include<bits/stdc++.h>
using namespace std;
// Given an array of integers, find the length of the longest subarray with sum equals to k.
// Input: arr[] = {1, 2, 3, 1, 1, 1, 4, 2, 3}, k = 3
// Output: 
int longestSubarray(int arr[],int size,int k){
     map<long long,int> hash;
       int sum=0;
       int maxlen=0;
       for(int i=0;i<size;i++){
           sum+=arr[i];
           if(sum==k){
               maxlen=max(maxlen,i+1);
           }
           int rem=sum-k;
           if(hash.find(rem)!=hash.end()){
               int len=i-hash[rem];
               maxlen=max(maxlen,len);
           }
           hash[sum]=i;
       }
       return maxlen;
}
int main(){
    int arr[]={1,2,3,1,1,1,4,2,3};
    int size=9;
    int k=3;
    cout<<longestSubarray(arr,size,k);
    return 0;
}