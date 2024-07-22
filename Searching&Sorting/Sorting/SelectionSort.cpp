// Selection sort 
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// 1. Find the minimum element in the array and swap it with the element at the beginning of the array.
// 2. Repeat the process for the remaining elements.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={64,25,12,22,11};
    int n=5;
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}