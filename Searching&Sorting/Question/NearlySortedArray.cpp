//given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent positions,
// i.e., arr[i] may be present at arr[i+1] or arr[i-1] . The task is to search for an element in this array

//input: arr[]={10,3,40,20,50,80,70}, key=40
//output: 2
//explanation: output is index of 40 in given array

//input: arr[]={10,3,40,20,50,80,70}, key=90
//output: -1
//explanation: -1 is returned to indicate element is not present

#include<bits/stdc++.h>
using namespace std;
int nearlySortedArray(int arr[],int size,int target){
  int s=0;
  int e=size-1;
  while(s<=e){
    int mid=(s+e)/2;
    cout<<"printing mid"<<mid<<endl;
    cout<<"target"<<target<<endl;
    cout<<"arr[mid]"<<arr[mid]<<endl;
    if(arr[mid]==target){
      return mid;
    }else if(arr[mid-1]==target){
      return mid-1;
    }else if(arr[mid+1]==target){
      return mid+1;
    }
    if(arr[mid]>target){
        e=mid-2;
    }else if(arr[mid]<target){
        s=mid+2;
    } 
}
return -1;

}
int main(){
    int arr[]={10,3,40,20,50,80,70};
    int size=7;
    int target=10;
    int ans=nearlySortedArray(arr,size,target);
        cout<<ans<<endl;
        cout<<"Element is present"<<endl;
   
    return 0;
}