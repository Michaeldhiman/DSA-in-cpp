 #include<bits/stdc++.h>
 using namespace std;
 int max(int arr[], int size){
    int ans=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return ans;
 }
 int min(int arr[], int size){
    int ans=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    return ans;
 }
 int main(){
    int arr[5]={10,20,14,50,54};
    int size=5;
    cout<<"Maximum Element is :"<<max(arr,5)<<endl; 
    cout<<"Minimum Element is :"<<min(arr,5)<<endl; 
    return 0;
 }