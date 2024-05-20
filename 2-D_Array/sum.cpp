
#include<bits/stdc++.h>
using namespace std;
// void rowsum(int arr[][4], int row,int column){
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<column;j++){
//             sum+=arr[i][j];
//         }
//         cout<<sum<<" "<<endl;
//     }

// }
void columnsum(int arr[][4], int row,int column){
    for(int i=0;i<column;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<" "<<endl;
    }

}
int main(){
    int arr[3][4]=  {
                    {10,10,10,10},
                    {20,20,20,20},
                    {30,30,30,30},
                    };
    int row=3;
    int column=4;
    // rowsum(arr,row,column);
    columnsum(arr,row,column);

    return 0;
}