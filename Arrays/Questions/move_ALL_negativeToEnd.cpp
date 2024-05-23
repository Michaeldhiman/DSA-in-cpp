#include<bits/stdc++.h>
using namespace std;
void NegativeToEnd(int arr[], int size){
    int i=0;
    int j=size-1;
    while(i<j){
        if(arr[i]<0) i++;
        if(arr[j]>=0) j--;
        else if(arr[i]>0 && arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return ;
}
int main(){
    int arr[]={1,2,-3,4,-5,6};
    int size=6;
    NegativeToEnd(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}