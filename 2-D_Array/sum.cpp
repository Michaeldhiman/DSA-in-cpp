
#include<bits/stdc++.h>
using namespace std;

// row wise sum

// void rowsum(int arr[][4], int row,int column){
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<column;j++){
//             sum+=arr[i][j];
//         }
//          cout<<"Row "<<i+1<<" : ";
//         cout<<sum<<" "<<endl;
//     }

// }


// column wise sum

void columnsum(int arr[][3], int row,int column){
    for(int i=0;i<column;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<"Column "<<i+1<<" : ";
        cout<<sum<<" "<<endl;
    }

}

// anti diagonal sum

void antiDiagonalSum(int arr[][3], int row,int column){
    int sum=0;
   for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i+j==row-1){
                sum+=arr[i][j];
            }
        }
   }
   cout<<"Anti Diagonal Sum :"
    cout<<sum<<endl;
}
int main(){
    int arr[3][3]=  {
                    {10,10,10},
                    {20,20,20},
                    {30,30,30},
                    };
    int row=3;
    int column=3;
    // rowsum(arr,row,column);
    columnsum(arr,row,column);
    // antiDiagonalSum(arr,row,column);

    return 0;
}