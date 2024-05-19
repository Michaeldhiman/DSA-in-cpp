#include<bits/stdc++.h>
using namespace std;
void rotateArray(int arr[], int size, int shift){
    // if shift is greater than size then we will take modulus as 
    // after the size's shift it will repeat itself
    if(shift>6) shift%=size; 
    if(shift==0) return;
    // first copy the last n element in temp array
    int temp[1000];
    int i=size-shift;
    int j=0;
    int count=0;
    while(i<size){
        temp[j]=arr[i];
        i++;
        j++;
        count++;
    }
    // shift the other elements by n shifts
    for(int i=size-1;i>=0;i--){
        arr[i]=arr[i-shift];
    }
    // insert the element from temp array to original array from starting
    i=0;
    while(i<count){
        arr[i]=temp[i];
        i++;
    }
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }  
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int shift=4;
    rotateArray(arr,size,shift);
   
    return 0;
}