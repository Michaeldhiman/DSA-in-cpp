// input 2-D Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][3];
    int row=2;
    int column=3;
    // input Row Wise
    cout<<"Input Row wise"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<"Enter the Value for ("<<i<<","<<j<<")";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}