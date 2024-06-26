// merge sort is a divide and conquer algorithm
// it divides the array into two halves and then sort the two halves and then merge the two halves
// time complexity of merge sort is O(nlogn)
// space complexity of merge sort is O(n)
// merge sort is stable
// merge sort is not in place



#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e,int mid){
    int leftlength=mid-s+1;
    int rightlength=e-mid;
    int *leftarr=new int[leftlength];
    int *rightarr=new int[rightlength];
    // copy orginal array to left and right array
    int index=s;
    for(int i=0;i<leftlength;i++){
        leftarr[i]=arr[index];
        index++;
    }
    //copy orginal array to right array
    index=mid+1;
    for(int i=0;i<rightlength;i++){
        rightarr[i]=arr[index];
        index++;
    }

    // merge
    int leftindex=0;
    int rightindex=0;
    int mainarrayindex=s;
    while(leftindex<leftlength && rightindex <rightlength){
        if(leftarr[leftindex]<rightarr[rightindex]){
            arr[mainarrayindex]=leftarr[leftindex];
            leftindex++;
            mainarrayindex++;

        }else{
            arr[mainarrayindex]=rightarr[rightindex];
            mainarrayindex++;
            rightindex++;
        }
    }
    // if still element are present in left array
    while(leftindex<leftlength){
        arr[mainarrayindex]=leftarr[leftindex];
        mainarrayindex++;
        leftindex++;
    }
    // if still element are present in right array
    while(rightindex<rightlength){
        arr[mainarrayindex]=rightarr[rightindex];
        mainarrayindex++;
        rightindex++;
    }
    delete [] leftarr;
    delete [] rightarr;
}
void mergesort(int arr[],int s, int e){
    // base case
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    // left part recurrsion se solve karo
    mergesort(arr,s,mid);
    // right part recurrsion se solve karo
    mergesort(arr,mid+1,e);
    // merge the two parts
    merge(arr,s,e,mid);
    }
int main(){
    int arr[]={10,80,110,90,50,30,40,20};
    int n=8;
    int s=0;
    int e=n-1;
    mergesort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}