#include<bits/stdc++.h>
using namespace std;
int check(string str,int i, int j){
    while(i<j){
        if(str[i]!=str[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int validPallindrome(string str){
    int i=0;
    int j=str.length()-1;
    while(i<=j){
        if(str[i]==str[j]){
            i++;
            j--;
        }else{
            int ans1=check(str,i+1,j);
            int ans2=check(str,i,j-1);
            return ans1||ans2;
        }
    }
    return 1;
}
int main(){
    string str;
    getline(cin,str);
    int ans=validPallindrome(str);
    if(ans==1) cout<<"Pallindrome";
    else cout<<"Not Pallindrome";
    

    return 0;
}