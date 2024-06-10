#include<bits/stdc++.h>
using namespace std;
int checkPallindrome(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        if(str[i]!=str[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main(){
    string str;
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++){
        string str2="";
        for(int j=0;j<str.length();j++){
            str2.push_back(str[j]);
            int ans=checkPallindrome(str2);
            if(ans==1) count++;
        }
    }
    cout<<count<<endl;

    return 0;
}