#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    for(int i=0;i<4;i++){
        if(i%2==0){
            for(int j=0;j<3;j++){
                cout<<arr[j][i]<<endl;
            }
        }else{
            for(int j=2;j>=0;j--){
                cout<<arr[j][i]<<endl;
            }
        }
       
        cout<<endl;
    }
    return 0;
}