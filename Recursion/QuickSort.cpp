// QuickSort
// QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.
// There are many different versions of quickSort that pick pivot in different ways.
// Always pick first element as pivot

//intuition

// The key process in quickSort is partition(). Target of partitions is,
// given an array and an element x of array as pivot, put x at its correct position in sorted array 
// and put all smaller elements (smaller than x) before x,
// and put all greater elements (greater than x) after x. All this should be done in linear time.



#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    // place pivot at right index
    int pivotindex=s+cnt;
    swap(arr[s],arr[pivotindex]);
    int left=s;
    int right=e;
    while(left< pivotindex && pivotindex<right){
        if(arr[left]<=pivot) left++;
        else if(arr[right]>pivot) right--;
        else{
           swap(arr[left],arr[right]);
           left++;
           right--;
        }
    }
    return pivotindex;

}
void quicksort(int arr[],int s,int e){
    // base case
    if(s>=e){
        return;
    }
    //partition
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
    return;
}
int main(){
    int arr[]={10,80,30,90,40,50,70};
    quicksort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}