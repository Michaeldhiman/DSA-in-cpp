#include<bits/stdc++.h>
using namespace std;
// void printeven(int arr[], int size,int index){
//     // base case

//     if(size==index) return ;
//     // found
//     // my part is to check one element only
//     if(arr[index]%2==0){
//         cout<<arr[index]<<" ";
//     }
//     // rest element will check by recurrsion
//     printeven(arr,size,index+1);
   
// }
void storeeven(int arr[], int size,int index,vector<int> &ans){
    // base case

    if(size==index) return ;
    // found
    // my part is to check one element only
    if(arr[index]%2==0){
       ans.push_back(arr[index]);
    }
    // rest element will check by recurrsion
    storeeven(arr,size,index+1,ans);
   
}
int main(){
    int arr[]={11,20,15,40,50,60};
    vector<int> v;
    int size=6;
    int index=0;
    // printeven(arr,size,index,v);
    storeeven(arr,size,index,v);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}