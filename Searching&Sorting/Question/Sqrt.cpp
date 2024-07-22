#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
        int s=0;
        int e=x;
        int ans=-1;
        while(s<=e){
            long long int mid=(s+e)/2;
            long long product=mid*mid;
            if(product==x) return mid;
            if(product>x){
                e=mid-1;
            }else{
                ans=mid;
                s=mid+1;
            }
            
        }
        return ans;
    }
int main(){
    // final time complexity is O(logn)+o(precision)
    int num=63;
    double sqrt=mySqrt(num);
    int precision=8;
    double step=0.1;
    while(precision--){
        double j=sqrt;
        while(j*j<=63){
            sqrt=j;
            j+=step;
        }
        step/=10;
    }
    // cout prints only print 5 precision digits
    // cout<<sqrt<<endl;
    printf("%.8f\n",sqrt);
    return 0;
}