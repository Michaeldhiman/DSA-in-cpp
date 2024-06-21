#include<bits/stdc++.h>
using namespace std;
void maximum(int arr[], int size,int index,int &maxi){
    // base case

    if(size==index) return ;
    // found
    // my part is to check one element only
    maxi=max(maxi,arr[index]);
    // rest element will check by recurrsion
    maximum(arr,size,index+1,maxi);
   
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int index=0;
    int maxi=INT_MIN;
    maximum(arr,size,index,maxi);
  cout<<maxi<<endl;
    return 0;
}