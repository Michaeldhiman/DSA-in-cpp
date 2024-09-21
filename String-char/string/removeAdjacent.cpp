#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(string &s){
    int i=0;
    int j=1;
    while(j<s.length()){
        if(s[i]==s[j]){
            s.erase(i,2);
            i=0;
            j=1;
        }else{
            i++;
            j++;
        }
    }
    return ;
}
int main(){
    string sentence;
    getline(cin,sentence);
    removeDuplicates(sentence);
    cout<<sentence;
    return 0;
}