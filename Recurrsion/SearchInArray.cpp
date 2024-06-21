#include<bits/stdc++.h>
using namespace std;
bool Searcharray(int arr[], int size,int index,int target){
    // base case
    // 2 base case 
    // not found
    if(size==index) return false;
    // found
    // my part is to check one element only
    if(arr[index]==target) return true;
    // rest element will check by recurrsion
    Searcharray(arr,size,index+1,target);
        // you are outside the array 
  
    // recursive relation 
   
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int index=0;
    int target=50;
    int ans=Searcharray(arr,size,index,target);
    if(ans) cout<<"Element found";
    else cout<<"Not found";
    return 0;
}