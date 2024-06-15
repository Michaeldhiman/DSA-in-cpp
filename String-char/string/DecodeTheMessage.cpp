#include<bits/stdc++.h>
using namespace std;
string decodeMessage(string key,string message){
    // step1: create mapping
    unordered_map<char,char> mapping;
    char space=' ';
    mapping[space]=space;
    char start='a';
    int index=0;
    while(start<='z' && index<key.length()){
        char keychar=key[index];
        if(mapping.find(keychar)==mapping.end()){
            mapping[keychar]=start;
            index++;
            start++;
        }
        else index++;
    }
    // step 2:use mapping and decode msg
    for(int i=0;i<message.length();i++){
        char messchar=message[i];
        char mappedchar=mapping[messchar];
        message[i]=mappedchar;
    }
    return message; 
}
int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    string ans=decodeMessage(str1,str2);
    cout<<ans<<endl;
    return 0;
}