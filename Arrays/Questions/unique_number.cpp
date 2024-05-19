#include<bits/stdc++.h>
 using namespace std;
int uniqueNumber(int arr[], int size){
    int xorsum=0;
    for(int i=0;i<size;i++){
        xorsum=xorsum^arr[i];
    }
   return xorsum;
}
 int main(){
    int arr[]={0,4,1,4,1};
    int size=5;
    cout<<uniqueNumber(arr,size)<<endl;
    return 0;
 }