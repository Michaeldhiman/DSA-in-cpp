#include<bits/stdc++.h>
using namespace std;
void  rowmaxwithone(vector<vector<int>> arr, int n, int m){
    int maxcount=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            count+=arr[i][j];
        }
        if(count>maxcount){
            maxcount=count;
            index=i;
        }
    }
    cout<<"Row is:"<<index<<endl;
}
void rowBinarySearch( vector<vector<int>> arr, int n, int m){
    int maxcount=0;
    int index=-1;
    for(int i=0;i<n;i++){
        auto it=lower_bound(arr[i].begin(),arr[i].end(),1);
        int cnt_one=arr[i].end()-it;
        if(cnt_one>maxcount){
            maxcount=cnt_one;
            index=i;
        }
    } 
    cout<<"Row is :"<<index<<endl;
}
int main(){
    vector<vector<int>> arr={{0,0,1,1,1},
                            {0,0,0,0,0},
                            {0,1,1,1,1},
                            {0,0,0,0,0},
                            {0,1,1,1,1},
                            };
    int n=arr.size();
    int m=arr[0].size();
    // rowmaxwithone(arr,n,m);
    rowBinarySearch(arr,n,m);
    return 0;
}