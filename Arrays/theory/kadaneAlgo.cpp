
// kadane's algorithm is used to find the maximum sum of a subarray in an array
// time complexity is O(n)
//aproach
// 1. initialize sum=0 and ans=INT_MIN
// 2. iterate over the array
// 3. add the element to sum
// 4. if sum is greater than ans then update ans
// 5. if sum is less than 0 then make sum=0
// 6. return ans

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
        int size=9;
        int sum=0;
        int ans=INT_MIN;
        for(int i=0;i<size;i++){
            sum+=arr[i]; 
            ans=max(sum,ans);
            if(sum<0) sum=0;

        }
        cout<<ans<<endl;

}
     