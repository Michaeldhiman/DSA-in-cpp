#include<bits/stdc++.h>
using namespace std;
int main(){
    // creation 
     
    int crr[]={1,2,3};
    int drr[4]={0};
    cout<<crr[0]<<endl; 
    cout<<crr[2]<<endl; 

    // fill --> intialize  each value of 
    // array with specific value
    int arr[4];
    fill(arr,arr+4,23);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }

    // input
    int new_arr[4];
    for(int i=0;i<4;i++){
        cout<<"Enter the element for "<<i<<"th index";
        cin>>new_arr[i];
    }
    cout<<"output"<<endl;
    for(int i=0;i<4;i++){
        cout<<"Element for "<<i<<"th index is:"<<new_arr[i]<<endl;
    }
    //size 
    int size=sizeof(new_arr)/sizeof(new_arr[0]);
    // it will tell how many block has been reserved 
    // it will not tell how many number of element are present
    cout<<size<<endl;

    


    return 0;
}