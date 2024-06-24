#include<bits/stdc++.h>
using namespace std;
void printstring(string str,int index){
    // base case rukna kab hai
    if(index==str.length()) return ;
    cout<<str[index];
    printstring(str,index+1);
}
int main(){
    string str;
    getline(cin,str);
    printstring(str,0);
    return 0;
}