#include<bits/stdc++.h>
using namespace std;
void sort(int arr[], int size){
    int zero_count=0;
    int one_count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0) zero_count++;
        else if(arr[i]==1)one_count++;
    }
    // for(int i=0;i<zero_count;i++){
    //     arr[i]=0;
    // }
    // for(int i=zero_count;i<size;i++){
    //     arr[i]=1;
    // }

    // fill function

    fill(arr,arr+zero_count,0);
    fill(arr+zero_count,arr+size,1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return ;
}
int main(){
    int arr[7]={0,1,1,0,0,1,1};
    int size=7;
    sort(arr,size);
    return 0;
 }