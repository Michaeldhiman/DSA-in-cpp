#include<bits/stdc++.h>
using namespace std;
int main(){
    // stack memory
    int a=5;
    cout<<a<<endl;



    // heap memory
    int *p=new int;
    *p=5;
    cout<<*p<<endl;
    // to deallocate memory we should delete explicity
    delete p;

    // array using heap memory

    // int n;
    // cout<<"Enter the size"<<endl;
    // cin>>n;
    // int *ptr=new int[n];
    // for(int i=0;i<n;i++){
    //     cin>>*(ptr+i);
    // }
    // cout<<"Element"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<*(ptr+i)<<" ";
    // }
    // delete[] ptr;

    // 2-d array using heap memory
    int **arr=new int*[4];
    for(int i=0;i<4;i++){
        // for every pointer create 1 -d array
        arr[i]=new int[3];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing 2-d array"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // deallocation
    for(int i=0;i<4;i++){
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;
}