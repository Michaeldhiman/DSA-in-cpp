//Insertion Sort
// it is like sorting a deck of cards
// we pick a card and insert it in the correct position
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// we take a element and compare it with previous element and
// if it is smaller than previous element then we swap it
// if the element is greater than previous elemen then break the loop
// and move to next element

#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[],int n){
   for(int i=1;i<n;i++){
    for(int j=i;j>0;j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }else{
            break;
        }
    }
   }
   return ;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return  0;
}