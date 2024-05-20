// search a element and find out whether element is present or not

#include<bits/stdc++.h>
using namespace std;
bool search(int arr[][4], int row,int column, int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==target) return true;
        }
    }
    //  if target is not found it return false
    return false;
}
int main(){
    int arr[3][4]=  {
                    {10,11,12,13},
                    {20,21,22,23},
                    {31,32,33,34},
                    };
    int row=3;
    int column=4;
    int target=12;
    int ans=search(arr,row,column,target);
    cout<<"Ans is:"<<ans<<endl;
    return 0;
}