// 2-D array using Vector

#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>arr, int target){
    int row=arr.size();
    int column=arr[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==target) return true;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> arr(4,vector<int>(3,0));
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int target=40;
    int ans=search(arr,target);
    cout<<ans;
    return 0;
}