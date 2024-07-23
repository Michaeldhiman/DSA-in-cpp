
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={64,25,12,22,11};
    int n=5;
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=n-1;j>i;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}