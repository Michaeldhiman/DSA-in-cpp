#include<bits/stdc++.h>
using namespace std;
void oneComplement(int arr[],int size){
    for(int i=0;i<size;i++){
       if(arr[i]==0) arr[i]=1;
       else if(arr[i]==1) arr[i]=0;
    }
    return ;
}
void twoComplement(int arr[],int size){
    int carry=1;
    int i=size-1;
    while(i>=0){
        int sum=arr[i]+carry;
        arr[i]=sum%2;
        carry=sum/2;
        if(carry==0) break;
        i--;
    }
    return;
}
int main(){
    int arr[]={0,0,0,0};
    int size=4; 
    cout<<"initial array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    oneComplement(arr,size);
    cout<<endl<<"one complement"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    twoComplement(arr,size);
    cout<<endl<<"new array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}