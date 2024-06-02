#include<bits/stdc++.h>
using namespace std;
int findOccuringElement(int arr[],int size){
   int s=0;
   int e=size-1;
   while(s<=e){
    int pairindex=0;
    int mid=(s+e)/2;
    if(s==e){
        return arr[mid]; 
    }
    int leftvalue=-1;
    int rightvalue=-1;
    int currentvalue=arr[mid];
   if(mid-1>=0) leftvalue=arr[mid-1];
   if(mid+1<size) rightvalue=arr[mid+1];
    if( (currentvalue!=rightvalue)&& (currentvalue!=leftvalue)) return arr[mid];
     if(currentvalue==leftvalue){
        pairindex=mid-1;
     }else if(currentvalue=rightvalue){
        pairindex=mid;
     }
     if(pairindex%2==0) s=mid+1;
     else if(pairindex%2!=0) e=mid-1;
   }
   return -1;
}
int main(){
   //  int arr[]={1,1,2,2,3,3,4,6,6,4,4,2,2};
   int arr[]={1,2,2,3,3};
    int size=5 ;
    // find odd occuring element
    int ans=findOccuringElement(arr,size);
    cout<<ans<<endl;
    return 0;
}