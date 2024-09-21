#include<bits/stdc++.h>
using namespace std;
void reverse(int mat[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(mat[i],mat[j]);
        i++;
        j--;
    }
    return ;
}
int main(){
    int arr[4][4]={
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16},
    };
    for(int i=0;i<4;i++){
        reverseRow(arr[i],4);
    }
    for(int i=0;i<4;i++){
        reverseCol(arr)
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}