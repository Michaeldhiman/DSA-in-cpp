#include<bits/stdc++.h>
using namespace std;
void printing(int n){
    if(n==0) return ;
    cout<<n<<" ";
    printing(n-1);
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    printing(n);
    return 0;
}