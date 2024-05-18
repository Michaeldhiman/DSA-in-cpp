#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size){
    // we will use two pointer approach to reverse the array
    // intialise i with first index and j with last index
    // iterate over the array till first pointer is less than second pointer and swap both numbers
   int i=0, j=size-1;
   while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    j--;
    i++;
   }
    return ;
}
 int main(){
    int arr[7]={10,20,30,40,50,60,70};
    int size=7;
    reverse(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }