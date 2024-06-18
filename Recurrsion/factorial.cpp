#include<bits/stdc++.h>
using namespace std;
int factorial(int num){
    // base case
    if(num<=1) return 1;
    // recursive call
    int recans=factorial(num-1);
    // processing
    int finalans=num*recans;

    return finalans;
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"The Factorial of number :"<<ans<<endl;
    return 0;
}