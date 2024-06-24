#include<bits/stdc++.h>
using namespace std;
void  subsequence(string str,int i,string opt){
    // base case
    if(i==str.length()){
        cout<<opt<<endl;
        return;
    }
    // ek case mei solve karuga
    // baki recursion solve karega
    // include
    char ch=str[i];
    opt.push_back(ch);
    subsequence(str,i+1,opt);
    opt.pop_back();

    subsequence(str,i+1,opt);
    // exclude
}
int main(){
    string str="abc";
    string opt="";
    subsequence(str,0,opt);
}
