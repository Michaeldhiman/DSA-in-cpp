
#include<bits/stdc++.h>
using namespace std;
int main(){
    // declaring and intialization of 2-D Array

    int arr[3][3]=  {
                    {10,20,30},
                    {30,40,50},
                    {50,60,70},
                    };

    // int arr[3][2]={1,2,3,4,5,6};
    // cout<<arr[2][1]<<endl;
    // row wise column
    cout<<"Row Wise Column"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    // columnWise;
    cout<<"Column Wise"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[col][row]<<" ";
        }
        cout<<endl;
    }

    // diagonal Wise
    cout<<"Diagonal Wise"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j)
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
   // anti-diagonal Wise
    cout<<"Anti-Diagonal Wise"<<endl;
    for(int i=0;i<3;i++){
            cout<<arr[i][3-i-1]<<" ";
    }
    // anti-diagonal Wise
    cout<<"Anti-Diagonal Wise"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i+j==3-1){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}