#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &str,int i,int j){
    // base case rukna kab hai
    if(i>=j) return true;
    // ek case mei solve karuga
    if(str[i]!=str[j]) return false;

    palindrome(str,i+1,j-1);
    // baki recursion solve karega
}
int main(){
    string str;
    getline(cin,str);
    cout<<palindrome(str,0,str.length()-1);
    return 0;
}