
#include<bits/stdc++.h>
using namespace std;
void transpose(int arr[][3], int row,int column){
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        if(i>j)
        swap(arr[i][j],arr[j][i]);
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  return ;
}
int main(){
    int arr[3][3]=  {
                    {10,11,12,},
                    {20,21,22},
                    {31,32,33},
                    };
    int row=3;
    int column=3;
    transpose(arr,row,column);
    
    return 0;
}