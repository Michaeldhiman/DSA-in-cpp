#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start,int end){
    // base case rukna kab hai
    if(start>=end) return ;
    // ek kaam mei karuga
    swap(arr[start],arr[end]);
    // baaki kaam recursion karega
    reverse(arr,start+1,end-1);
}
int main(){
    int arr[]={5,4,3,2,1};
    int size=5;
    reverse(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}