#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    int one_count=0;
    int zero_count=0;
    int two_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) zero_count++;
        else if(arr[i]==1) one_count++;
        else if(arr[i]==2) two_count++;
    }
    for(int i=0;i<zero_count;i++){
        arr[i]=0;
    }
    for(int i=zero_count;i<zero_count+one_count;i++){
        arr[i]=1;
    }
    for(int i=zero_count+one_count;i<10;i++){
        arr[i]=2;
    }
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}