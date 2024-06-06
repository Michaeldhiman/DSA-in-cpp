#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s){
    string ans="";
    int n=s.length();
    for(int i=0;i<n;i++){
        char current=s[i];
        if(ans.empty()){
            ans.push_back(current);
        }else if(ans.back()==current){
            ans.pop_back();
        }else{
            ans.push_back(current);
        }
    }
    return ans;

}
string  removeAllOccurrence(string str1, string str2){
    int len=str2.length();
    while(str1.find(str2)!=string::npos){
        int index=str1.find(str2);
        str1.erase(index,len);
    }
    return str1;
}
int main(){
    string sentence;
    getline(cin,sentence);
    // string ans=removeDuplicates(sentence);
    string str2;
    getline(cin,str2);
    string ans=removeAllOccurrence(sentence,str2);
    cout<<ans;
    return 0;
}