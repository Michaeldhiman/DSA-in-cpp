#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[50];
    cin>>arr;
    int count=0;
    int index=0;
    while(arr[index]!='\0'){
        count++;
        index++;
    }
    cout<<count<<endl;
    return 0;
}