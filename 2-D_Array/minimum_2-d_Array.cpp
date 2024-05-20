
#include<bits/stdc++.h>
using namespace std;
int minimum(int arr[][4], int row,int column){
    //  intialize min variable with int max
    // go to each element and compare with min and 
    // store the minimum value in min
    int min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]<min)  min=arr[i][j];
        }   
    }
    return min;
}
int maximum(int arr[][4], int row,int column){
    //  intialize max variable with int min
    // go to each element and compare with max and 
    // store the maximum value in max
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]>max)  max=arr[i][j];
        }   
    }
    return max;
}
int main(){
     int arr[3][4]=  {
                    {10,11,12,13},
                    {20,21,22,23},
                    {31,32,33,34},
                    };
    int row=3;
    int column=4;
    int ans=minimum(arr,row,column);
    int ans2=maximum(arr,row,column);
    cout<<ans<<" "<<ans2<<endl;
    return 0;
}