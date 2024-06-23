#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[], int size,int index){
    // base case
    if(index==size){
        // you are outside the array 
        return ;
    }
    // recursive relation 
    cout<<arr[index]<<" ";
    printarray(arr,size,index+1);
    
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int index=0;
    printarray(arr,size,index);
    return 0;
}