#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void printvv(vector<vector<int>> v){
    for(int i=0;i<v.size();i++){
        vector<int> &temp=v[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a<<" "<<b<<endl;
    }

}
bool comp(vector<int> &a,vector<int> &b){
    if(a[0]!=b[0]){
        return a[0]<b[0];
    }else{
        return a[1]>b[1];
    }
}
// bool mycomp(int a, int b){
//     return a>b; // decreasing
//     // return a<b // increasing
// }
int main(){
    // vector<int> v={44,55,22,11,33};
    // sort(v.begin(),v.end(),mycomp);
    // print(v);

    vector<vector<int>>v={{1,45},{0,55},{0,22},{0,11},{2,33}};


    // vector<vector<int>> arr;
    // int n;
    // cout<<"Enter the number of elements: ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int a,b;
    //     cin>>a>>b;
    //     vector<int> temp;
    //     temp.push_back(a);
    //     temp.push_back(b);
    // }

    // printvv(v);
    sort(v.begin(),v.end(),comp);
    printvv(v);

    return 0;
}