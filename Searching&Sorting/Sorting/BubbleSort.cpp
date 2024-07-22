// Bubble Sort
// 1. Swap the neignbouring elements if elmenent is greater than the next element.
// 2. Repeat the process for all the elements.
// 3. If no swapping is done in a pass then break the loop.
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={64,25,12,22,11};
    int n=5;
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}