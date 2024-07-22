#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]>arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    return ;
}
int main(){
    int arr[]={65,25,12,22,23};
    int size=5;
    selection(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}