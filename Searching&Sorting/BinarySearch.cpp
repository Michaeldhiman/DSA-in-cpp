// why Binary Search
// suppose we have 10000 elemnts in an array and we want to search for a particular element
// if we use linear search then it will take 10000 comparisons in worst case
// but if we use binary search then it will take only 14 comparisons in worst case
// time complexity is O(log n)

// in Binary search we need to have a sorted array
// we will compare the middle element of the array with the element to be searched
// if the middle element is equal to the element  then we return the true
// if the middle element is greater than the element  then we search in the left half of the array
// if the middle element is less than the element  then we search in the right half of the array
// we keep on doing this until we find the element or the left index is greater than the right index

#include <bits/stdc++.h>
using namespace std;
bool binarySearchIncreasing(int arr[], int size,int target){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target) return true;
        if(arr[mid]<target){
            start=mid+1;
        }else if(arr[mid]>target){
            end=mid-1;
        }
        
    }
    return false;
}
bool binarySearchDecreasing(int arr2[], int size,int target2){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr2[mid]==target2) return true;
        if(arr2[mid]<target2){
            end=mid-1;
        }else if(arr2[mid]>target2){
            start=mid+1;
        }
        
    }
    return false;
}
int main(){
    int arr[]={2,8,10,20,30,34,46,78};
    int arr2[]={100,90,80,70,60,50,45,40};
    int size=8;
    int target=46;
    int target2=40;
    int ans=binarySearchIncreasing(arr,size,target);
    int ans2=binarySearchDecreasing(arr2,size,target2);
    if(ans) cout<<target<<" Found  in arr"<<endl;
    else cout<<target<<" Not Found in arr"<<endl;
    if(ans2) cout<<target2<<" Found  in arr2"<<endl;
    else cout<<target2<<" Not Found in arr2"<<endl;

    // binary Search using STL

    int answer=binary_search(arr,arr+size,target);
    if(answer) cout<<target<<" Found  in arr"<<endl;
    else cout<<target<<" Not Found in arr"<<endl;
    return 0;

}