#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int sizea,int brr[],int sizeb,vector<int> &ans){
    int i=0;
    int j=0;
    while(i<sizea && j<sizeb){
        if(arr[i]<brr[j]){
            ans.push_back(arr[i]);
            i++;
        }else if(arr[i]>brr[j]){
            ans.push_back(brr[j]);
            j++;
        }else{
            ans.push_back(brr[i]);
            i++;
            j++;
        }
    }
    // if still element are present in arr
    while(i<sizea){
        ans.push_back(arr[i]);
        i++;
    }
    // if still element are present in brr
    while(j<sizeb){
        ans.push_back(arr[j]);
        j++;
    }

}
int main(){
    int arr[]={20,40,60,80,90,100};
    int sizea=6;
    int brr[]={10,30,50,70};
    int sizeb=4;
    vector<int> ans;
    merge(arr,sizea,brr,sizeb,ans);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}