#include<bits/stdc++.h>
 using namespace std;
 void count(int arr[], int size){
    int zero_count=0;
    int one_count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1) one_count++;
        else if(arr[i]==0) zero_count++;
    }
    cout<<"Number of 1's are"<<one_count<<endl;
    cout<<"Number of 0's are"<<zero_count<<endl;
    return ;

 }
 int main(){
    int arr[5]={1,0,1,1,0};
    int size=5;
    count(arr,size);
    return 0;
 }