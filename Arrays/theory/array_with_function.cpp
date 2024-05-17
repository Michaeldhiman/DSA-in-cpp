 #include<bits/stdc++.h>
 using namespace std;
 void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Element at "<<i<<"th index is :"<<arr[i]<<endl;
    }
    arr[1]=100;
    return ;
 }
 void solve(int num[], int size){
    for(int i=0;i<size;i++){
        num[i]=num[i]+10;

    }
    return ;
 }
 int main(){
    //  int arr[]={10,20,30,40,50};
    //  int size=5; 
    //  printarray(arr,size);
    //  // array is passed  by reference
    //  cout<<"new element at 1 position:"<<arr[1]<<endl;

    int new_arr[4]={0};
    int size=4;
    cout<<"Intial values"<<endl;
    for(int i=0;i<size;i++){
        cout<<new_arr[i]<<endl;
    }
    solve(new_arr,size);
    cout<<"Final values"<<endl;
    for(int i=0;i<size;i++){
        cout<<new_arr[i]<<endl;
    }
    return 0;
 }