#include<bits/stdc++.h>
using namespace std;
class Area{
    public:
    // circle
    int calculate(int r){
        return 3.14*r*r;
    }
    // rectangle
    int calculate(int l,int b){
        return l*b;
    }
};
int main(){
    Area A1,A2;
    cout<<A1.calculate(3)<<" ";
    cout<<A2.calculate(3,5);
    return 0;
}