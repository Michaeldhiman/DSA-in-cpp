// Dynamic Array
#include<bits/stdc++.h>
using namespace std;
void fun(int arr[], int n){
    cout<<"Array elements are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int [n]; // each element would be 0 or garbage value
    // taking n elements as input and inserting in array 
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr[i]=data;
    }
    //now i want to insert new value in array
    for(int i=0;i<=10;i++){
        arr[n+i]=80;
    }
    // we can not insert value in array like this as it will give segmentation fault 
    // as we are trying to access the memory which is not allocated to us
    
    fun(arr,n);
    return 0;
}