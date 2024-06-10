#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int *ptr=arr;
    cout<<"ptr:"<<ptr<<endl;
    cout<<"value at ptr:"<<*ptr<<endl;
    char ch[100]="LoveBabbar";
    cout<<"base Address:"<<&ch<<endl;
    char *cptr=ch;
    cout<<cptr<<endl;
    char *ptr2="Babbar";
    cout<<ptr2<<endl;
    

    return 0;
}