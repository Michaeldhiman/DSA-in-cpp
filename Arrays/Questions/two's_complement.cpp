#include<bits/stdc++.h>
using namespace std;
void twoComplement(int arr[], int index){
    for(int i=0;i<index;i++){
        if(arr[i]==0) arr[i]=1;
        else if(arr[i]==1) arr[i]=0;
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    int index=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==1){
            index=i;
            break;
        }

    }
    twoComplement(arr,index);
    cout<<"The two's complement of the given binary number is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}