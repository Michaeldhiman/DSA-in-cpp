#include<bits/stdc++.h>
using namespace std;
// print all pairs
void allPairs(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i]<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return ;
}

//two sum 

int twoSum(int arr[], int size, int target){
    // if pair not found then return -1
    // else return count
    // count will store the number of pairs

    int count=0;
    bool ans=false;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                ans=true;
                count++;
            }
        }
    }
    if(ans) return count;
    else return -1;
}


// two sum and return  fist answer in pairs

pair<int,int> twoSum(int arr[], int size, int target){
    // if pair not found then return -1
    // else return pair
    pair<int,int> ans=make_pair(-1,-1);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                ans.first=arr[i];
                ans.second=arr[j];
                return ans;
            }
        }
    }
}


int main(){
    // int arr[4]={10,20,30,40};
    // int size=4;
    // allPairs(arr,size);
    int new_arr[5]={10,5,20,15,30};
    int size=5;
    int target=35;
    cout<<twoSum(new_arr,size,target);
    // pair<int,int> ans=twoSum(new_arr,size,target);
    // cout<<ans.first<<" ";
    // cout<<ans.second<<" ";
    return 0;
 }