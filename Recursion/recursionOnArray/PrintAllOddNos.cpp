#include<bits/stdc++.h>
using namespace std;
void printodd(int arr[], int size,int index){
    // base case

    if(size==index) return ;
    // found
    // my part is to check one element only
    if(arr[index]%2!=0){
        cout<<arr[index]<<" ";
    }
    // rest element will check by recurrsion
    printodd(arr,size,index+1);
   
}
int main(){
    int arr[]={11,20,15,40,50,60};
    int size=6;
    int index=0;
    printodd(arr,size,index);
    return 0;
}