#include<bits/stdc++.h>
 using namespace std;
void extreme(int arr[], int size){
    int i=0, j=size-1;
    while(i<=j){
        if(i==j) cout<<arr[j]<<" ";
        else{
            cout<<arr[i]<<" "<<arr[j]<<" ";
        }
            i++;
            j--;
       
    }
    return ;
}
 int main(){
    int arr[7]={10,20,30,40,50,60,70};
    int size=7;
extreme(arr,size);
    return 0;
 }