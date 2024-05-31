#include<bits/stdc++.h>
using namespace std;
void left_shift(int arr[],int size){
   int temp=arr[0];
   for(int i=1;i<size;i++){
    arr[i-1]=arr[i];
   }
   arr[size-1]=temp;
   return;
}
void left_shift_k_times(int arr[],int size,int k){
    int temp[1000];
    int i;
    for(i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(i=k;i<size;i++){
        arr[i-k]=arr[i];
    }
    i=size-k;
    int j=0;
    while(i<size){
        arr[i]=temp[j];
        i++;
        j++;
    }
    return ;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    // left_shift(arr,size);
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
    left_shift_k_times(arr,size,2);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}