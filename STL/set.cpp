#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);
     
     set<int> ::iterator it;
        for(it=st.begin();it!=st.end();it++){
            cout<<*it<<endl;
        }
         cout<<st.size()<<endl;
        // st.clear();
        // st.empty();
    return 0;
}