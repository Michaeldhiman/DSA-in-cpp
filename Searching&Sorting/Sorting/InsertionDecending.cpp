#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[],int n){
   for(int i=1;i<n;i++){
    for(int j=i;j>0;j--){
        if(arr[j]>arr[j-1]){
            swap(arr[j],arr[j-1]);
        }else{
            break;
        }
    }
   }
   return ;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return  0;
}