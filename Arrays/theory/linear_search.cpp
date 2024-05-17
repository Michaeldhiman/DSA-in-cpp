// Linear Search-- we have to find a particular element in array 
// we have to go to  each element of array and check whether it is element which we n
//  if present return it index
// if not present return -1;

#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int size, int target){
     for(int i=0;i<size;i++){
        if(arr[i]==target){
            // element found
            int index=i;
            return index;
        }
     }
     // element not found
     return -1;
}

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the Element at "<<i<<"th index:"<<endl;
        cin>>arr[i];
    }
    int target_element;
    cout<<"Enter the Target Element :";
    cin>>target_element;
    int size=5;
    int ans=linear_search(arr,size,target_element);
    cout<<"index is "<<ans;
}