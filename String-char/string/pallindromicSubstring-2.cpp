#include<bits/stdc++.h>
using namespace std;
int check(string s, int i, int j){
    int count=0;
    while(s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
int countsubstring(string s){
    int total=0;
    for(int center=0;center<s.length();center++){
        // odd 
        int i=center;
        int j=center;
        int oddsubstring=check(s,i,j);
        // even
        i=center;
        j=center+1;
        int evensubstring=check(s,i,j);
        total+=oddsubstring+evensubstring;
    }
    return total;
}
int main(){
    string str;
    getline(cin,str);
    int ans=countsubstring(str);
    cout<<ans<<endl;
    return 0;
}