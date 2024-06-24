#include<bits/stdc++.h>
using namespace std;
void printstring(string &str,int i, int j){
    // base case rukna kab hai
    if(i>j) return ;
    swap(str[i],str[j]);
    printstring(str,i+1,j-1);
}
int main(){
    string str;
    getline(cin,str);
    printstring(str,0,str.length()-1);
    cout<<str;
    return 0;
}