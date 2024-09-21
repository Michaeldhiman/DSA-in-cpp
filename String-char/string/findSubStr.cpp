#include<bits/stdc++.h>
using namespace std;
void substr(string s1, string s2) {
    for (int i = 0; i <= s1.length() - s2.length(); i++) {
        bool flag = true;
        for (int j = 0; j < s2.length(); j++) {
            if (s2[j] != s1[i + j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << i << " " << i + s2.length() - 1 << endl;
        }
    }
}

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    substr(s1,s2);
    return 0;
}